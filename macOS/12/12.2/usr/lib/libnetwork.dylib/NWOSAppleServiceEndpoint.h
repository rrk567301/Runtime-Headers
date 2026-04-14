@interface NWOSAppleServiceEndpoint : NWConcrete_nw_endpoint {
    char *apple_id;
    char *service;
}

- (void)dealloc;
- (id)copyDictionary;
- (unsigned int)type;
- (char *)createDescription:(BOOL)a0;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (id)copyEndpoint;

@end
