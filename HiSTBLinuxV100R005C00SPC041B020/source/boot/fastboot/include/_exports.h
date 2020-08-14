/*
 * You do not need to use #ifdef around functions that may not exist
 * in the final configuration (such as i2c).
 */
EXPORT_FUNC(get_version)
EXPORT_FUNC(getc)
EXPORT_FUNC(tstc)
EXPORT_FUNC(putc)
EXPORT_FUNC(puts)
EXPORT_FUNC(printf)
EXPORT_FUNC(install_hdlr)
EXPORT_FUNC(free_hdlr)
EXPORT_FUNC(malloc)
EXPORT_FUNC(free)
EXPORT_FUNC(udelay)
EXPORT_FUNC(get_timer)
EXPORT_FUNC(vprintf)
EXPORT_FUNC(do_reset)
EXPORT_FUNC(getenv)
EXPORT_FUNC(setenv)
EXPORT_FUNC(forceenv)
EXPORT_FUNC(simple_strtoul)
EXPORT_FUNC(simple_strtol)
#ifndef CONFIG_SUPPORT_CA_RELEASE
EXPORT_FUNC(strcmp)
#endif
EXPORT_FUNC(i2c_write)
EXPORT_FUNC(i2c_read)
EXPORT_FUNC(spi_init)
EXPORT_FUNC(spi_setup_slave)
EXPORT_FUNC(spi_free_slave)
EXPORT_FUNC(spi_claim_bus)
EXPORT_FUNC(spi_release_bus)
EXPORT_FUNC(spi_xfer)