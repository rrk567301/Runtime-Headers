@interface NWOSSRVEndpoint : NWConcrete_nw_endpoint {
    char *name;
}

- (void)dealloc;
- (id)copyDictionary;
- (unsigned int)type;
- (const char *)domainForPolicy;
- (char *)createDescription:(BOOL)a0;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (id)copyEndpoint;
- (unsigned long long)getHash;

@end
