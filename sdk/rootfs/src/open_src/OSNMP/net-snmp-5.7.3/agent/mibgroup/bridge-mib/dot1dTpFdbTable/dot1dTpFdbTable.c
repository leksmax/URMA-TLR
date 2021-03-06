/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
/** \page MFD helper for dot1dTpFdbTable
 *
 * \section intro Introduction
 * Introductory text.
 *
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-features.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "dot1dTpFdbTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "dot1dTpFdbTable_interface.h"

const oid dot1dTpFdbTable_oid[] = { DOT1DTPFDBTABLE_OID };
const int dot1dTpFdbTable_oid_size = OID_LENGTH(dot1dTpFdbTable_oid);

    dot1dTpFdbTable_registration  dot1dTpFdbTable_user_context;

void initialize_table_dot1dTpFdbTable(void);
void shutdown_table_dot1dTpFdbTable(void);


/**
 * Initializes the dot1dTpFdbTable module
 */
void
init_dot1dTpFdbTable(void)
{
    DEBUGMSGTL(("verbose:dot1dTpFdbTable:init_dot1dTpFdbTable","called\n"));

    /*
     * TODO:300:o: Perform dot1dTpFdbTable one-time module initialization.
     */
     
    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("dot1dTpFdbTable"))
        initialize_table_dot1dTpFdbTable();

} /* init_dot1dTpFdbTable */

/**
 * Shut-down the dot1dTpFdbTable module (agent is exiting)
 */
void
shutdown_dot1dTpFdbTable(void)
{
    if (should_init("dot1dTpFdbTable"))
        shutdown_table_dot1dTpFdbTable();

}

/**
 * Initialize the table dot1dTpFdbTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_dot1dTpFdbTable(void)
{
    dot1dTpFdbTable_registration * user_context;
    u_long flags;

    DEBUGMSGTL(("verbose:dot1dTpFdbTable:initialize_table_dot1dTpFdbTable","called\n"));

    /*
     * TODO:301:o: Perform dot1dTpFdbTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize dot1dTpFdbTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context = netsnmp_create_data_list("dot1dTpFdbTable", NULL, NULL);
    
    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;
    
    /*
     * call interface initialization code
     */
    _dot1dTpFdbTable_initialize_interface(user_context, flags);
} /* initialize_table_dot1dTpFdbTable */

/**
 * Shutdown the table dot1dTpFdbTable 
 */
void
shutdown_table_dot1dTpFdbTable(void)
{
    /*
     * call interface shutdown code
     */
    _dot1dTpFdbTable_shutdown_interface(&dot1dTpFdbTable_user_context);
}

/**
 * pre-request callback
 *
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_ERROR                : other error
 */
int
dot1dTpFdbTable_pre_request(dot1dTpFdbTable_registration * user_context)
{
    DEBUGMSGTL(("verbose:dot1dTpFdbTable:dot1dTpFdbTable_pre_request","called\n"));

    /*
     * TODO:510:o: Perform dot1dTpFdbTable pre-request actions.
     */

    return MFD_SUCCESS;
} /* dot1dTpFdbTable_pre_request */

/**
 * post-request callback
 *
 * Note:
 *   New rows have been inserted into the container, and
 *   deleted rows have been removed from the container and
 *   released.
 *
 * @param user_context
 * @param rc : MFD_SUCCESS if all requests succeeded
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : other error (ignored)
 */
int
dot1dTpFdbTable_post_request(dot1dTpFdbTable_registration * user_context, int rc)
{
    DEBUGMSGTL(("verbose:dot1dTpFdbTable:dot1dTpFdbTable_post_request","called\n"));

    /*
     * TODO:511:o: Perform dot1dTpFdbTable post-request actions.
     */

    return MFD_SUCCESS;
} /* dot1dTpFdbTable_post_request */


/** @{ */
