@interface NWOSURLEndpoint : NWConcrete_nw_endpoint {
    struct __CFURL { } *url_ref;
    unsigned short port;
    char *url;
    char *scheme;
    char *hostname;
    char *path;
    char *sanitized_url;
    char url_hash[9];
    unsigned char inferred_port : 1;
    unsigned char __pad_bits : 7;
}

- (void)dealloc;
- (id)copyDictionary;
- (unsigned short)port;
- (unsigned int)type;
- (const char *)domainForPolicy;
- (unsigned long long)getHash;
- (id)copyEndpoint;
- (char *)createDescription:(BOOL)a0;
- (const char *)hostname;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;

@end
