#include "ether_header.h"
#include "ip_header.h"
#include "arp_header.h"

void print_arp(arp_header *arp,ip_header *ih){

    extern packet* pk;
    print_ip(pk->ip);
    arp_header* ah;
    ah=pk->arp;

    ah=(arp_header*)malloc(ntohs(ah->arp_hardtype));
    ah=(arp_header*)(pk->app+ETHER_LENGTH+(pk))
    printf("************************** ARP Header *****************************");
    printf("Hardware type: %d\n",ntohs(ah->arp_hardtype));
    printf("\n");
    printf("Protocol:%d\n",ntohs(ah->arp_proto));
    printf("\n");
    printf("Hardsize: %d\n",ntohs(ah->arp_hardsize));
    printf("\n");
    printf("protosize: %d\n",ntohs(ah->arp_protosize));
    printf("\n");
    printf("opcode: %d\n",ntohs(ah->arp_opcode));
    printf("\n");
    printf("smacadd: %d\n",ntohs(ah->arp_smacadd));
    printf("\n");
    printf("sipadd: %d\n",ntohs(ah->arp_sipadd));
    printf("\n");
    printf("tmacadd: %d\n",ntohs(ah->arp_tamcadd));
    printf("\n");
    printf("tipadd: %d\n",ntohs(ah->arp_tipadd));
    


}
