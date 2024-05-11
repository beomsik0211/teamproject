#pragma once
#include "struct.h"
#include "udp_struct.h"
#include "ether_header.h"
#include "ip_header.h"

void print_udp(ether_header* eh, ip_header* ih);