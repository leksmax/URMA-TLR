/*****************************************************************************
* Copyright (c) 2016 Digi International Inc., All Rights Reserved
*
* This software contains proprietary and confidential information of Digi
* International Inc.  By accepting transfer of this copy, Recipient agrees
* to retain this software in confidence, to prevent disclosure to others,
* and to make no use of this software other than that for which it was
* delivered.  This is an unpublished copyrighted work of Digi International
* Inc.  Except as permitted by federal law, 17 USC 117, copying is strictly
* prohibited.
*
* Restricted Rights Legend
*
* Use, duplication, or disclosure by the Government is subject to
* restrictions set forth in sub-paragraph (c)(1)(ii) of The Rights in
* Technical Data and Computer Software clause at DFARS 252.227-7031 or
* subparagraphs (c)(1) and (2) of the Commercial Computer Software -
* Restricted Rights at 48 CFR 52.227-19, as applicable.
*
* Digi International Inc. 11001 Bren Road East, Minnetonka, MN 55343
*
*****************************************************************************/

#ifndef __FACRES_H__
#define __FACRES_H__



#define     SECONDS_FOR_BUTTON      5       // Number of seconds button pressed before we do our work.
#define     POLLS_PER_SECOND        2       // Number of times in a second to check the button
#define     COUNT_FOR_BUTTON        (POLLS_PER_SECOND*SECONDS_FOR_BUTTON)

typedef enum
{
    RESET_PB_WAITING_FOR_RELEASE,
    RESET_PB_WAITING_FOR_PRESS,
    RESET_PB_COUNTING_PRESS,

} t_reset_pb_state;


int facres_worker(void);


#endif
