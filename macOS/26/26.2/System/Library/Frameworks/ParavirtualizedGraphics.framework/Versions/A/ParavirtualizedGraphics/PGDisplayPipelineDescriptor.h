@interface PGDisplayPipelineDescriptor : NSObject <NSCopying>

@property unsigned long long renderTargetPixelFormat;
@property BOOL hasGamma;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
