#pragma once
#include "define.h"
#include "include.h"

#pragma pack(push, 1)
typedef struct udp_header {
	u_short		udp_sport;
	u_short		udp_dport;
	u_short		udp_length;
	u_short		udp_checksum;
	u_char		udp_payload[];
}UdpHeader;
#pragma pack(pop)

