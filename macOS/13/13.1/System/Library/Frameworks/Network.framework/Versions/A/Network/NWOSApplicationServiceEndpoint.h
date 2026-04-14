@interface NWOSApplicationServiceEndpoint : NWConcrete_nw_endpoint {
    char *apple_id;
    char *application_service;
    unsigned char service_identifier[16];
}

- (void)dealloc;
- (id)copyDictionary;
- (unsigned int)type;
- (char *)createDescription:(BOOL)a0;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (id)copyEndpoint;

@end
