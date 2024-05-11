#include "ether_header.h"
#include "ip_header.h"
#include "udp_header.h"

void print_udp(ether_header* eh, ip_header* ih) {
	extern packet* pk;
	print_ip(pk->ip);
	udp_header* uh;
	uh = pk->udp;

	uh = (udp_header*)malloc(ntohs(uh->udp_length));
	uh = (udp_header*)(pk->app + ETHER_LENGTH + (pk->ip->ip_leng * 4));
	printf("************************* UDP Header *************************\n");
	printf("Source Port: %d\n", ntohs(uh->udp_sport));
	printf("\n");
	printf("Destination Port: %d\n", ntohs(uh->udp_dport));
	printf("\n");
	printf("Length: %d\n", ntohs(uh->udp_length));
	printf("\n");
	printf("Checksum: 0x%04x\n", ntohs(uh->udp_checksum));
	printf("\n");
	printf("UDP payload (%d bytes)\n", ntohs(uh->udp_length) - 8);
	for (int i = 0; i < ntohs(uh->udp_length) - 8; i++) {
		printf("%02x ", uh->udp_payload[i]);
	}
}