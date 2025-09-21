@interface PGDisplayPipelineDescriptor : NSObject <NSCopying>

@property unsigned long long renderTargetPixelFormat;
@property BOOL hasGamma;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;

@end
