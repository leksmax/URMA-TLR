/*
 * Note: this file originally auto-generated by mib2c using
 *  $
 *
 * $Id:$
 */
#ifndef DOT1DSTPPORTTABLE_OIDS_H
#define DOT1DSTPPORTTABLE_OIDS_H

#ifdef __cplusplus
extern "C" {
#endif


/* column number definitions for table dot1dStpPortTable */
#define DOT1DSTPPORTTABLE_OID              1,3,6,1,2,1,17,2,15


#define COLUMN_DOT1DSTPPORT         1
#define COLUMN_DOT1DSTPPORT_FLAG    (0x1 << 0)
    
#define COLUMN_DOT1DSTPPORTPRIORITY         2
#define COLUMN_DOT1DSTPPORTPRIORITY_FLAG    (0x1 << 1)
    
#define COLUMN_DOT1DSTPPORTSTATE         3
#define COLUMN_DOT1DSTPPORTSTATE_FLAG    (0x1 << 2)
    
#define COLUMN_DOT1DSTPPORTENABLE         4
#define COLUMN_DOT1DSTPPORTENABLE_FLAG    (0x1 << 3)
    
#define COLUMN_DOT1DSTPPORTPATHCOST         5
#define COLUMN_DOT1DSTPPORTPATHCOST_FLAG    (0x1 << 4)
    
#define COLUMN_DOT1DSTPPORTDESIGNATEDROOT         6
#define COLUMN_DOT1DSTPPORTDESIGNATEDROOT_FLAG    (0x1 << 5)
    
#define COLUMN_DOT1DSTPPORTDESIGNATEDCOST         7
#define COLUMN_DOT1DSTPPORTDESIGNATEDCOST_FLAG    (0x1 << 6)
    
#define COLUMN_DOT1DSTPPORTDESIGNATEDBRIDGE         8
#define COLUMN_DOT1DSTPPORTDESIGNATEDBRIDGE_FLAG    (0x1 << 7)
    
#define COLUMN_DOT1DSTPPORTDESIGNATEDPORT         9
#define COLUMN_DOT1DSTPPORTDESIGNATEDPORT_FLAG    (0x1 << 8)
    
#define COLUMN_DOT1DSTPPORTFORWARDTRANSITIONS         10
#define COLUMN_DOT1DSTPPORTFORWARDTRANSITIONS_FLAG    (0x1 << 9)
    
#define COLUMN_DOT1DSTPPORTPATHCOST32         11
#define COLUMN_DOT1DSTPPORTPATHCOST32_FLAG    (0x1 << 10)
    

#define DOT1DSTPPORTTABLE_MIN_COL   COLUMN_DOT1DSTPPORT
#define DOT1DSTPPORTTABLE_MAX_COL   COLUMN_DOT1DSTPPORTPATHCOST32
    


#ifdef __cplusplus
}
#endif

#endif /* DOT1DSTPPORTTABLE_OIDS_H */
