#pragma once

#include "ESP32Console/ConsoleCommand.h"

namespace ESP32Console::Commands
{
    const ConsoleCommand getClearCommand();

    const ConsoleCommand getEchoCommand();

    const ConsoleCommand getSetMultilineCommand();

    const ConsoleCommand getHistoryCommand(int uart_channel=0);

    const ConsoleCommand getEnvCommand();

    const ConsoleCommand getDeclareCommand();
}