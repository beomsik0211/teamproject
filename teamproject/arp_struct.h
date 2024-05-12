#pragma once
#include "define.h"
#include "include.h"

#pragma pack(push,1)
typedef struct arp_header {
	u_short		arp_hardtype;
	u_short		arp_proto;
	u_char		arp_hardsize;
	u_char		arp_protosize;
	u_short		arp_opcode;
	u_short		arp_smacadd;
	u_short		arp_sipadd;
	u_short		arp_tmacadd;
	u_short		arp_tipadd;
}ArpHeader;
#pragma pack(pop)
