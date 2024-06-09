#include "ether_header.h"
#include "ip_header.h"
#include "icmp_header.h"

void print_icmp(icmp_header* arp, ip_header* ih) {

	extern packet* pk;
	print_ip(pk->ip);
	icmp_header* ich;
	//ich = pk->icmp;


	printf("icmp type: %d\n", ntohs(ich->icmp_type));
	printf("\n");
	printf("icmp code: %d\n", ntohs(ich->icmp_code));
	printf("\n");
	printf("icmp checksum: %d\n", ntohs(ich->icmp_checksum));
	printf("\n");
	printf("icmp other: %d\n", ntohs(ich->icmp_other));




}
