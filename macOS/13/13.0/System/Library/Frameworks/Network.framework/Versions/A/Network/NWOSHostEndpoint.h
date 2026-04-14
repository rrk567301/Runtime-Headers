@class NSObject;
@protocol OS_dispatch_data;

@interface NWOSHostEndpoint : NWConcrete_nw_endpoint {
    char *hostname;
    unsigned short port;
    unsigned short priority;
    unsigned short weight;
    NSObject<OS_dispatch_data> *ech_config;
}

- (void)dealloc;
- (id)copyDictionary;
- (void).cxx_destruct;
- (unsigned int)type;
- (unsigned short)port;
- (unsigned short)priority;
- (unsigned short)weight;
- (void)setWeight:(unsigned short)a0;
- (void)setPriority:(unsigned short)a0;
- (const char *)domainForPolicy;
- (const char *)hostname;
- (id)echConfig;
- (void)setEchConfig:(id)a0;
- (char *)createDescription:(BOOL)a0;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (id)copyEndpoint;
- (unsigned long long)getHash;

@end
