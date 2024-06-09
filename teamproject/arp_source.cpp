#include "ether_header.h"
#include "ip_header.h"
#include "arp_header.h"
#include "arp_struct.h"
#include "ip_struct.h"

void print_arp(arp_header *arp,ip_header *ih){

    extern packet* pk;
    print_ip(pk->ip);
    arp_header* ah;
    //ah=pk->arp;(

   // ah=(arp_header*)malloc(ntohs(ah->arp_hwtype));
    ah = (arp_header*)(pk->app + ETHER_LENGTH + (pk->ip->ip_leng * 2));
   // ah=(arp_header*)(pk->app+ETHER_LENGTH+(pk))
   // printf("************************** ARP Header *****************************");


    //printf("Hardware type: %d\n",ntohs(ah->arp_hwtype));
    printf("\n");
    printf("Protocol:%d\n", ntohs(ah->arp_ptype));
    printf("\n");
    printf("protosize: %d\n",ntohs(ah->arp_plen));
    printf("\n");
    printf("opcode: %d\n",ntohs(ah->arp_opcode));
    printf("\n");
    printf("smacadd: %d\n",ntohs(ah->arp_shost[ETHER_ADDR_LEN]));
    printf("\n");
   // printf("sipadd: %d\n", ntohs(ah->arp_saddr));
    printf("\n");
    printf("tmacadd: %d\n",ntohs(ah->arp_dhost[ETHER_ADDR_LEN]));
    //printf("\n");
   // printf("tipadd: %d\n",ntohs(ah->arp_daddr));


}
#include "ether_header.h"
#include "ip_header.h"
#include "arp_header.h"
#include "arp_struct.h"
#include "ip_struct.h"

void print_arp(arp_header *arp,ip_header *ih){

    extern packet* pk;
    print_ip(pk->ip);
    arp_header* ah;
    //ah=pk->arp;(

   // ah=(arp_header*)malloc(ntohs(ah->arp_hwtype));
    ah = (arp_header*)(pk->app + ETHER_LENGTH + (pk->ip->ip_leng * 2));
   // ah=(arp_header*)(pk->app+ETHER_LENGTH+(pk))
   // printf("************************** ARP Header *****************************");


    //printf("Hardware type: %d\n",ntohs(ah->arp_hwtype));
    printf("\n");
    printf("Protocol:%d\n", ntohs(ah->arp_ptype));
    printf("\n");
    printf("protosize: %d\n",ntohs(ah->arp_plen));
    printf("\n");
    printf("opcode: %d\n",ntohs(ah->arp_opcode));
    printf("\n");
    printf("smacadd: %d\n",ntohs(ah->arp_shost[ETHER_ADDR_LEN]));
    printf("\n");
   // printf("sipadd: %d\n", ntohs(ah->arp_saddr));
    printf("\n");
    printf("tmacadd: %d\n",ntohs(ah->arp_dhost[ETHER_ADDR_LEN]));
    //printf("\n");
   // printf("tipadd: %d\n",ntohs(ah->arp_daddr));


}
