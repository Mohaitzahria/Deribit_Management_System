# Deribit Order Execution and Management System

## Overview

This project is a C++ application designed to interact with the Deribit API, enabling efficient management of cryptocurrency trading operations. It supports features such as placing, canceling, and modifying orders, retrieving the order book, and viewing active trading positions. The application is specifically configured for use on the Deribit testnet.

## Features
- **Authentication**: Securely handle API credentials.
- **Place Orders**: Submit buy or sell orders for a specified cryptocurrency.
- **Cancel Orders**: Cancel existing orders by providing their IDs.
- **Modify Orders**: Change the parameters of existing orders.
- **Get Order Book**: Retrieve the current order book for a specified cryptocurrency.
- **View Current Positions**: Display current trading positions.

## Prerequisites

- C++11 or later
- [libcurl](https://curl.se/)
- [nlohmann/json](https://github.com/nlohmann/json) for JSON parsing

## Installation

1. **Clone the Repository**:
    ```sh
    git clone https://github.com/yourusername/Deribit_Management_System.git
    cd Deribit_Management_System
    ```

2. **Install Dependencies**:
    ```sh
    vcpkg install curl
    vcpkg install nlohmann-json
    ```

3. **Build the Application**:
    ```sh
    mkdir build
    cd build
    cmake ..
    cmake --build . --config Release
    ```

## Configuration

Set up your API credentials by editing the `config.h` file in the project root:

```cpp
#pragma once

const std::string API_KEY = "your_api_key_here"; // Replace with your API key
const std::string SECRET_KEY = "your_secret_key_here"; // Replace with your secret key
```

## Usage

1. **Run the Application**:
    ```sh
    ./deribit_order_management
    ```

2. **Available Commands**:
    - **Authenticate**: Establish a session with the Deribit API.
    - **Place Order**: Create a new buy or sell order for a specified trading pair.
    - **Cancel Order**: Remove an existing order using its ID.
    - **Modify Order**: Update parameters of an active order.
    - **Get Order Book**: Retrieve the current market depth for a specified trading pair.
    - **View Positions**: Display active trading positions.



1. **Fork the repository**.
2. **Create a new branch**:
    ```sh
    git checkout -b feature/your-feature
    ```
3. **Commit your changes**:
    ```sh
    git commit -m 'Add some feature'
    ```
4. **Push to the branch**:
    ```sh
    git push origin feature/your-feature
    ```
5. **Open a pull request**.

## Contact

For any inquiries or issues, please contact Mohamed Ait Zahria at mohammedaitzahria@gmail.com.

