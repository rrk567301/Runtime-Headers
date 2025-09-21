@interface CCMultiViewWarpIntraFrameDataDescriptor : CCDataDescriptor

@property (nonatomic) long long sourceTextureWidth;
@property (nonatomic) long long sourceTextureHeight;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
