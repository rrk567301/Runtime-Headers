@interface ICNFMCQuotaUsage : NSObject

@property (nonatomic) struct { long long count; unsigned long long size; } current;
@property (nonatomic) struct { long long count; unsigned long long size; } maximum;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)incrementCurrentBy:(struct { long long x0; unsigned long long x1; })a0;
- (void)decrementCurrentBy:(struct { long long x0; unsigned long long x1; })a0;

@end
