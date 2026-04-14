@class NSObject;
@protocol OS_nw_txt_record;

@interface NWOSBonjourEndpoint : NWConcrete_nw_endpoint {
    char *service_name;
    char *service_type;
    char *service_domain;
    char *service_composite;
    NSObject<OS_nw_txt_record> *txt_record;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)copyDictionary;
- (unsigned int)type;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (char *)createDescription:(BOOL)a0;
- (id)copyEndpoint;
- (unsigned long long)getHash;
- (const char *)domainForPolicy;
- (id)txtRecord;
- (void)setTxtRecord:(id)a0;

@end
