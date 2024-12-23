#pragma once

#include <string>
#include <vector>
#include <curl/curl.h>
#include <iostream>
#include <nlohmann/json.hpp>
#include <websocketpp/config/asio_no_tls.hpp>
#include <websocketpp/server.hpp>
#include <stdexcept>


// Configuration settings for API access
namespace Config {
    const std::string API_KEY = "qVxHaD3a"; // Your API key
    const std::string SECRET_KEY = "IkNhZGM_swhArWDkd9KrLy6UaQpRyykQXyhTVO09GZ8"; // Your secret key
}

// OrderManager class declaration
class OrderManager {
public:
    std::string placeOrder(const std::string& symbol, const std::string& type, double amount, double price);
    std::string cancelOrder(const std::string& order_id);
    std::string modifyOrder(const std::string& order_id, double new_amount, double new_price);
    std::string getOrderBook(const std::string& symbol);
    std::string getCurrentPositions();
};

// UtilityNamespace for utility functions
namespace UtilityNamespace {
    // Function declarations
    std::string sendPostRequest(const std::string& url, const std::string& postFields);
    std::string sendPostRequestWithAuth(const std::string& url, const std::string& postFields, const std::string& token);
    std::string sendGetRequest(const std::string& url);
    std::string authenticate();
    void logMessage(const std::string& message);

    // Callback function to write data received from cURL to a string
    static size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* s);
}

// WebSocketServer class declaration
class WebSocketServer {
public:
    void startServer(int port);
};