@class NSData, NSArray;

@interface _PFDQDECallSite : NSObject <NSCopying> {
    NSData *_addresses;
    NSArray *_symbols;
}

+ (void)initialize;
+ (id)currentCallSite;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithAddresses:(id)a0;
- (id)backtraceWithPrefix:(id)a0;

@end
