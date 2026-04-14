@class NSObject;
@protocol OS_dispatch_data;

@interface NWOSAddressEndpoint : NWConcrete_nw_endpoint {
    struct sockaddr_storage { unsigned char ss_len; unsigned char ss_family; char __ss_pad1[6]; long long __ss_align; char __ss_pad2[112]; } address;
    struct ether_addr { unsigned char octet[6]; } ethernet_address;
    NSObject<OS_dispatch_data> *ech_config;
    char *hostname;
    int original_fd;
    unsigned short priority;
    unsigned char calculated_hostname : 1;
}

- (void)dealloc;
- (id)copyDictionary;
- (void).cxx_destruct;
- (unsigned int)type;
- (unsigned short)port;
- (unsigned short)priority;
- (void)setPriority:(unsigned short)a0;
- (const char *)hostname;
- (id)echConfig;
- (void)setEchConfig:(id)a0;
- (char *)createDescription:(BOOL)a0;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (id)copyEndpoint;
- (unsigned long long)getHash;

@end
