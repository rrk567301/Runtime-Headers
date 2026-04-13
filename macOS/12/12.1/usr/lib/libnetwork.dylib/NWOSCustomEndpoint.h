@class NSObject;
@protocol OS_dispatch_data;

@interface NWOSCustomEndpoint : NWConcrete_nw_endpoint {
    NSObject<OS_dispatch_data> *data;
    id /* block */ resolver_block;
    unsigned int type;
}

- (void).cxx_destruct;
- (id)copyDictionary;
- (unsigned int)type;
- (char *)createDescription:(BOOL)a0;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (id)copyEndpoint;
- (unsigned long long)getHash;

@end
