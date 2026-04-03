# 🍗 KFC Traditional Ordering System

A simple **console-based ordering system** written in **C language** that simulates a traditional KFC counter experience.
Users can browse the menu, make orders, view receipts, and calculate totals — all through a text-based interface.

---

## 🧾 Features

- 🏷️ **Menu Display** – Shows a categorized list of KFC items (chicken, burgers, drinks, desserts, etc.).
- 🛒 **Order System** – Allows customers to select items, specify quantities, and add multiple items.
- 💵 **Bill Calculation** – Automatically calculates subtotal, tax, and total amount.
- 🔁 **Repeat Orders** – Supports multiple orders in one session.
- 📄 **Receipt Display** – Shows a clean summary of all orders with total cost.
- ❌ **Exit Option** – Ends the program gracefully when the user finishes ordering.

---

## ⚙️ How It Works

1. The program starts with a **main menu** (Order, View Menu, Exit).
2. When choosing *Order*, the system will:
   - Display available menu items and prices.
   - Prompt the user to select items by number.
   - Ask for the quantity of each item.
   - Add the item to the order list and calculate running totals.
3. When the user finishes ordering, the program prints a **final receipt**.

---

## 🧩 Technologies Used

- **Language:** C
- **Libraries:**
  - `stdio.h` – input/output operations
  - `stdlib.h` – general utilities
  - `string.h` – string manipulation
  - `ctype.h` – character handling
  - `time.h` (optional) – for date/time receipts
