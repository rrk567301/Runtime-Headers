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
- (void).cxx_destruct;
- (id)copyDictionary;
- (unsigned short)port;
- (unsigned int)type;
- (unsigned short)priority;
- (void)setWeight:(unsigned short)a0;
- (unsigned short)weight;
- (void)setPriority:(unsigned short)a0;
- (const char *)domainForPolicy;
- (unsigned long long)getHash;
- (id)copyEndpoint;
- (char *)createDescription:(BOOL)a0;
- (id)echConfig;
- (const char *)hostname;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (void)setEchConfig:(id)a0;

@end
