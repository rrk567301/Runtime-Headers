@interface ICNFMCQuotaUsage : NSObject

@property (nonatomic) struct { long long count; unsigned long long size; } current;
@property (nonatomic) struct { long long count; unsigned long long size; } maximum;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)decrementCurrentBy:(struct { long long x0; unsigned long long x1; })a0;
- (void)incrementCurrentBy:(struct { long long x0; unsigned long long x1; })a0;

@end
