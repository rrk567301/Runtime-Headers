@interface NWOSAppleServiceEndpoint : NWConcrete_nw_endpoint {
    char *apple_id;
    char *service;
}

- (void)dealloc;
- (id)copyDictionary;
- (unsigned int)type;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (char *)createDescription:(BOOL)a0;
- (id)copyEndpoint;

@end
