@interface MTLShaderValidationConfiguration : NSObject <NSCopying>

@property BOOL enableBoundsChecking;
@property BOOL enableThreadgroupMemoryChecks;
@property BOOL enableTextureChecks;
@property BOOL enableResourceUsageValidation;
@property BOOL enableStackOverflow;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
