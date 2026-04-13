@interface PGDisplayPipelineDescriptor : NSObject <NSCopying>

@property unsigned long long renderTargetPixelFormat;
@property BOOL hasGamma;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
