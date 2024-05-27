#pragma once
#include "define.h"
#include "include.h"

#pragma pack(push,1)
typedef struct icmp_header {
	u_char		icmp_type;
	u_char		icmp_code;
	u_short		icmp_checksum;
	u_int		icmp_other;


}IcmpHeader;
#pragma pack(pop)
