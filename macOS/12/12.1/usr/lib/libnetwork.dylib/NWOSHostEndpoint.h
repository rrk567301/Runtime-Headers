@class NSObject;
@protocol OS_dispatch_data, OS_nw_txt_record;

@interface NWOSHostEndpoint : NWConcrete_nw_endpoint {
    char *hostname;
    unsigned short port;
    unsigned short priority;
    unsigned short weight;
    NSObject<OS_nw_txt_record> *txt_record;
    NSObject<OS_dispatch_data> *ech_config;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)copyDictionary;
- (unsigned int)type;
- (unsigned short)port;
- (unsigned short)weight;
- (void)setWeight:(unsigned short)a0;
- (void)setPriority:(unsigned short)a0;
- (unsigned short)priority;
- (char *)createDescription:(BOOL)a0;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (id)copyEndpoint;
- (unsigned long long)getHash;
- (const char *)hostname;
- (const char *)domainForPolicy;
- (id)txtRecord;
- (void)setTxtRecord:(id)a0;
- (id)echConfig;
- (void)setEchConfig:(id)a0;

@end
