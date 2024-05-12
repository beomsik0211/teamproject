#pragma once
#include "struct.h"
#include "udp_struct.h"
#include "ip_header.h"

void print_arp(arp_header* arp, ip_header *ih);	