@interface NWOSSRVEndpoint : NWConcrete_nw_endpoint {
    char *name;
}

- (void)dealloc;
- (id)copyDictionary;
- (unsigned int)type;
- (char *)createDescription:(BOOL)a0;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (id)copyEndpoint;
- (unsigned long long)getHash;
- (const char *)domainForPolicy;

@end
