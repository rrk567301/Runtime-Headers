@interface MTLShaderValidationConfiguration : NSObject <NSCopying>

@property BOOL enableBoundsChecking;
@property BOOL enableThreadgroupMemoryChecks;
@property BOOL enableTextureChecks;
@property BOOL enableResourceUsageValidation;
@property BOOL enableStackOverflow;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
