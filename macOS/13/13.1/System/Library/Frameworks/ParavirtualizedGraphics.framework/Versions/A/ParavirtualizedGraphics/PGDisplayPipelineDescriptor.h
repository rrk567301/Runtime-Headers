@interface PGDisplayPipelineDescriptor : NSObject <NSCopying>

@property unsigned long long renderTargetPixelFormat;
@property BOOL hasGamma;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
