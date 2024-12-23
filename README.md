---
title: "Deribit Order Management System"
description: "A Command-Line Interface (CLI) application for managing orders on Deribit, coded in C++ and requiring the libcurl and JSON libraries."
---

# Deribit Order Management System

A Command-Line Interface (CLI) application for managing orders on Deribit, coded in C++ and requiring the libcurl and JSON libraries. This tool enables users to interact with the Deribit API for efficient cryptocurrency trading directly from the terminal.

## Features

- **Order Management**: Place, cancel, and modify orders.
- **Market Data**: Retrieve and display the current order book.
- **Position Management**: View active trading positions.
- **Authentication**: Securely handle API credentials.

## Prerequisites

- C++11 or later
- [libcurl](https://curl.se/)
- [nlohmann/json](https://github.com/nlohmann/json) for JSON parsing

## Installation

1. **Clone the Repository**:
    ```sh
    git clone https://github.com/yourusername/deribit_order_management.git
    cd deribit_order_management
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

For any inquiries or issues, please contact Othmane Nouakchi at Othman.nouakchi007@gmail.com.

