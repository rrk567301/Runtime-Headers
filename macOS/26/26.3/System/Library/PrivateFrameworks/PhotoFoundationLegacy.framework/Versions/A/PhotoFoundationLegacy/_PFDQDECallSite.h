@class NSData, NSArray;

@interface _PFDQDECallSite : NSObject <NSCopying> {
    NSData *_addresses;
    NSArray *_symbols;
}

+ (void)initialize;
+ (id)currentCallSite;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithAddresses:(id)a0;
- (id)backtraceWithPrefix:(id)a0;

@end
