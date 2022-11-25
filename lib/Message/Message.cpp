#include "Message.h"
/**
 * @brief  错误状态解析
 * @param  status    状态
 * @retval None
 */
void err_message(int status)
{
#if DEBUG_OUTPUT
    const char *message;
    switch (status)
    {
    case PI_INIT_FAILED:
        message = "GPIO initialized failed.";
        break;
    case PI_BAD_USER_GPIO:
        message = "GPIO not 0-31.";
        break;
    case PI_BAD_GPIO:
        message = "GPIO not 0-53.";
        break;
    case PI_BAD_MODE:
        message = "mode not 0-7.";
        break;
    case PI_BAD_LEVEL:
        message = "level not 0-1.";
        break;
    case PI_BAD_PUD:
        message = "pud not 0-2.";
        break;
    case PI_BAD_PULSEWIDTH:
        message = "pulsewidth not 0 or 500-2500.";
        break;
    case PI_BAD_DUTYCYCLE:
        message = "dutycycle outside set range.";
        break;
    case PI_BAD_TIMER:
        message = "timer not 0-9.";
        break;
    case PI_BAD_MS:
        message = "ms not 10-60000.";
        break;
    case PI_BAD_TIMETYPE:
        message = "timetype not 0-1.";
        break;
    case PI_BAD_SECONDS:
        message = "seconds < 0.";
        break;
    case PI_BAD_MICROS:
        message = "micros not 0-999999.";
        break;
    case PI_TIMER_FAILED:
        message = "gpioSetTimerFunc failed.";
        break;
    case PI_BAD_WDOG_TIMEOUT:
        message = "timeout not 0-60000.";
        break;
    case PI_BAD_CLK_PERIPH:
        message = "clock peripheral not 0-1.";
        break;
    case PI_BAD_CLK_MICROS:
        message = "clock micros not 1, 2, 4, 5, 8, or 10.";
        break;
    case PI_BAD_BUF_MILLIS:
        message = "buf millis not 100-10000.";
        break;
    case PI_BAD_DUTYRANGE:
        message = "dutycycle range not 25-40000.";
        break;
    case PI_BAD_SIGNUM:
        message = "signum not 0-63.";
        break;
    case PI_BAD_PATHNAME:
        message = "can't open pathname.";
        break;
    case PI_NO_HANDLE:
        message = "no handle available.";
        break;
    case PI_BAD_HANDLE:
        message = "unknown handle.";
        break;
    case PI_BAD_IF_FLAGS:
        message = "ifFlags > 4.";
        break;
    case PI_BAD_CHANNEL:
        message = "DMA channel or DMA primary channel not 0-15.";
        break;
    case PI_BAD_SOCKET_PORT:
        message = "socket port not 1024-32000.";
        break;
    case PI_BAD_FIFO_COMMAND:
        message = "unrecognized fifo command.";
        break;
    case PI_BAD_SECO_CHANNEL:
        message = "DMA secondary channel not 0-15.";
        break;
    case PI_NOT_INITIALISED:
        message = "function called before gpioInitialise.";
        break;
    case PI_INITIALISED:
        message = "function called after gpioInitialise.";
        break;
    case PI_BAD_WAVE_MODE:
        message = "waveform mode not 0-3.";
        break;
    case PI_BAD_CFG_INTERNAL:
        message = "bad parameter in gpioCfgInternals call.";
        break;
    case PI_BAD_WAVE_BAUD:
        message = "baud rate not 50-250K(RX)/50-1M(TX).";
        break;
    case PI_TOO_MANY_PULSES:
        message = "waveform has too many pulses.";
        break;
    case PI_TOO_MANY_CHARS:
        message = "waveform has too many chars.";
        break;
    case PI_NOT_SERIAL_GPIO:
        message = "no bit bang serial read on GPIO.";
        break;
    case PI_BAD_SERIAL_STRUC:
        message = "bad (null) serial structure parameter.";
        break;
    case PI_BAD_SERIAL_BUF:
        message = "bad (null) serial buf parameter.";
        break;
    case PI_NOT_PERMITTED:
        message = "GPIO operation not permitted.";
        break;
    case PI_SOME_PERMITTED:
        message = "one or more GPIO not permitted.";
        break;
    case PI_BAD_WVSC_COMMND:
        message = "bad WVSC subcommand.";
        break;
    case PI_BAD_WVSM_COMMND:
        message = "bad WVSM subcommand.";
        break;
    case PI_BAD_WVSP_COMMND:
        message = "bad WVSP subcommand.";
        break;
    case PI_BAD_PULSELEN:
        message = "trigger pulse length not 1-100.";
        break;
    case PI_BAD_SCRIPT:
        message = "invalid script.";
        break;
    case PI_BAD_SCRIPT_ID:
        message = "unknown script id.";
        break;
    case PI_BAD_SER_OFFSET:
        message = "add serial data offset > 30 minutes.";
        break;
    case PI_GPIO_IN_USE:
        message = "GPIO already in use.";
        break;
    case PI_BAD_SERIAL_COUNT:
        message = "must read at least a byte at a time.";
        break;
    case PI_BAD_PARAM_NUM:
        message = "script parameter id not 0-9.";
        break;
    case PI_DUP_TAG:
        message = "script has duplicate tag.";
        break;
    case PI_TOO_MANY_TAGS:
        message = "script has too many tags.";
        break;
    case PI_BAD_SCRIPT_CMD:
        message = "illegal script command.";
        break;
    case PI_BAD_VAR_NUM:
        message = "script variable id not 0-149.";
        break;
    case PI_NO_SCRIPT_ROOM:
        message = "no more room for scripts.";
        break;
    case PI_NO_MEMORY:
        message = "can't allocate temporary memory.";
        break;
    case PI_SOCK_READ_FAILED:
        message = "socket read failed.";
        break;
    case PI_SOCK_WRIT_FAILED:
        message = "socket write failed.";
        break;
    case PI_TOO_MANY_PARAM:
        message = "too many script parameters (> 10).";
        break;
    case PI_SCRIPT_NOT_READY:
        message = "script initialising.";
        break;
    case PI_BAD_TAG:
        message = "script has unresolved tag.";
        break;
    case PI_BAD_MICS_DELAY:
        message = "bad MICS delay (too large).";
        break;
    case PI_BAD_MILS_DELAY:
        message = "bad MILS delay (too large).";
        break;
    case PI_BAD_WAVE_ID:
        message = "non existent wave id.";
        break;
    case PI_TOO_MANY_CBS:
        message = "No more CBs for waveform.";
        break;
    case PI_TOO_MANY_OOL:
        message = "No more OOL for waveform.";
        break;
    case PI_EMPTY_WAVEFORM:
        message = "attempt to create an empty waveform.";
        break;
    case PI_NO_WAVEFORM_ID:
        message = "no more waveforms.";
        break;
    case PI_I2C_OPEN_FAILED:
        message = "can't open I2C device.";
        break;
    case PI_SER_OPEN_FAILED:
        message = "can't open serial device.";
        break;
    case PI_SPI_OPEN_FAILED:
        message = "can't open SPI device.";
        break;
    case PI_BAD_I2C_BUS:
        message = "bad I2C bus.";
        break;
    case PI_BAD_I2C_ADDR:
        message = "bad I2C address.";
        break;
    case PI_BAD_SPI_CHANNEL:
        message = "bad SPI channel.";
        break;
    case PI_BAD_FLAGS:
        message = "bad i2c/spi/ser open flags.";
        break;
    case PI_BAD_SPI_SPEED:
        message = "bad SPI speed.";
        break;
    case PI_BAD_SER_DEVICE:
        message = "bad serial device name.";
        break;
    case PI_BAD_SER_SPEED:
        message = "bad serial baud rate.";
        break;
    case PI_BAD_PARAM:
        message = "bad i2c/spi/ser parameter.";
        break;
    case PI_I2C_WRITE_FAILED:
        message = "i2c write failed.";
        break;
    case PI_I2C_READ_FAILED:
        message = "i2c read failed.";
        break;
    case PI_BAD_SPI_COUNT:
        message = "bad SPI count.";
        break;
    case PI_SER_WRITE_FAILED:
        message = "ser write failed.";
        break;
    case PI_SER_READ_FAILED:
        message = "ser read failed.";
        break;
    case PI_SER_READ_NO_DATA:
        message = "ser read no data available.";
        break;
    case PI_UNKNOWN_COMMAND:
        message = "unknown command.";
        break;
    case PI_SPI_XFER_FAILED:
        message = "spi xfer/read/write failed.";
        break;
    case PI_BAD_POINTER:
        message = "bad (NULL) pointer.";
        break;
    case PI_NO_AUX_SPI:
        message = "no auxiliary SPI on Pi A or B.";
        break;
    case PI_NOT_PWM_GPIO:
        message = "GPIO is not in use for PWM.";
        break;
    case PI_NOT_SERVO_GPIO:
        message = "GPIO is not in use for servo pulses.";
        break;
    case PI_NOT_HCLK_GPIO:
        message = "GPIO has no hardware clock.";
        break;
    case PI_NOT_HPWM_GPIO:
        message = "GPIO has no hardware PWM.";
        break;
    case PI_BAD_HPWM_FREQ:
        message = "invalid hardware PWM frequency.";
        break;
    case PI_BAD_HPWM_DUTY:
        message = "hardware PWM dutycycle not 0-1M.";
        break;
    case PI_BAD_HCLK_FREQ:
        message = "invalid hardware clock frequency.";
        break;
    case PI_BAD_HCLK_PASS:
        message = "need password to use hardware clock 1.";
        break;
    case PI_HPWM_ILLEGAL:
        message = "illegal, PWM in use for main clock.";
        break;
    case PI_BAD_DATABITS:
        message = "serial data bits not 1-32.";
        break;
    case PI_BAD_STOPBITS:
        message = "serial (half) stop bits not 2-8.";
        break;
    case PI_MSG_TOOBIG:
        message = "socket/pipe message too big.";
        break;
    case PI_BAD_MALLOC_MODE:
        message = "bad memory allocation mode.";
        break;
    case PI_TOO_MANY_SEGS:
        message = "too many I2C transaction segments.";
        break;
    case PI_BAD_I2C_SEG:
        message = "an I2C transaction segment failed.";
        break;
    case PI_BAD_SMBUS_CMD:
        message = "SMBus command not supported by driver.";
        break;
    case PI_NOT_I2C_GPIO:
        message = "no bit bang I2C in progress on GPIO.";
        break;
    case PI_BAD_I2C_WLEN:
        message = "bad I2C write length.";
        break;
    case PI_BAD_I2C_RLEN:
        message = "bad I2C read length.";
        break;
    case PI_BAD_I2C_CMD:
        message = "bad I2C command.";
        break;
    case PI_BAD_I2C_BAUD:
        message = "bad I2C baud rate, not 50-500k.";
        break;
    case PI_CHAIN_LOOP_CNT:
        message = "bad chain loop count.";
        break;
    case PI_BAD_CHAIN_LOOP:
        message = "empty chain loop.";
        break;
    case PI_CHAIN_COUNTER:
        message = "too many chain counters.";
        break;
    case PI_BAD_CHAIN_CMD:
        message = "bad chain command.";
        break;
    case PI_BAD_CHAIN_DELAY:
        message = "bad chain delay micros.";
        break;
    case PI_CHAIN_NESTING:
        message = "chain counters nested too deeply.";
        break;
    case PI_CHAIN_TOO_BIG:
        message = "chain is too long.";
        break;
    case PI_DEPRECATED:
        message = "deprecated function removed.";
        break;
    case PI_BAD_SER_INVERT:
        message = "bit bang serial invert not 0 or 1.";
        break;
    case PI_BAD_EDGE:
        message = "bad ISR edge value, not 0-2.";
        break;
    case PI_BAD_ISR_INIT:
        message = "bad ISR initialisation.";
        break;
    case PI_BAD_FOREVER:
        message = "loop forever must be last command.";
        break;
    case PI_BAD_FILTER:
        message = "bad filter parameter.";
        break;
    case PI_BAD_PAD:
        message = "bad pad number.";
        break;
    case PI_BAD_STRENGTH:
        message = "bad pad drive strength.";
        break;
    case PI_FIL_OPEN_FAILED:
        message = "file open failed.";
        break;
    case PI_BAD_FILE_MODE:
        message = "bad file mode.";
        break;
    case PI_BAD_FILE_FLAG:
        message = "bad file flag.";
        break;
    case PI_BAD_FILE_READ:
        message = "bad file read.";
        break;
    case PI_BAD_FILE_WRITE:
        message = "bad file write.";
        break;
    case PI_FILE_NOT_ROPEN:
        message = "file not open for read.";
        break;
    case PI_FILE_NOT_WOPEN:
        message = "file not open for write.";
        break;
    case PI_BAD_FILE_SEEK:
        message = "bad file seek.";
        break;
    case PI_NO_FILE_MATCH:
        message = "no files match pattern.";
        break;
    case PI_NO_FILE_ACCESS:
        message = "no permission to access file.";
        break;
    case PI_FILE_IS_A_DIR:
        message = "file is a directory.";
        break;
    case PI_BAD_SHELL_STATUS:
        message = "bad shell return status.";
        break;
    case PI_BAD_SCRIPT_NAME:
        message = "bad script name.";
        break;
    case PI_BAD_SPI_BAUD:
        message = "bad SPI baud rate, not 50-500k.";
        break;
    case PI_NOT_SPI_GPIO:
        message = "no bit bang SPI in progress on GPIO.";
        break;
    case PI_BAD_EVENT_ID:
        message = "bad event id.";
        break;
    case PI_CMD_INTERRUPTED:
        message = "Used by Python.";
        break;
    case PI_NOT_ON_BCM2711:
        message = "not available on BCM2711.";
        break;
    case PI_ONLY_ON_BCM2711:
        message = "only available on BCM2711.";
        break;
    case PI_PIGIF_ERR_0:
        message = "PI_PIGIF_ERR_0.";
        break;
    case PI_PIGIF_ERR_99:
        message = "PI_PIGIF_ERR_99.";
        break;
    case PI_CUSTOM_ERR_0:
        message = "PI_CUSTOM_ERR_0.";
        break;
    case PI_CUSTOM_ERR_999:
        message = "PI_CUSTOM_ERR_999.";
        break;
    }
    cout << message << endl;
#endif
}