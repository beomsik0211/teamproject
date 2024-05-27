#include "ether_header.h"
#include "ip_header.h"
#include "icmp_header.h"

void print_icmp(icmp_header* arp, ip_header* ih) {

	extern packet* pk;
	print_ip(pk->ip);
	icmp_header* ich;
	ich = pk->icmp;



}
