@class NSString, MTLSharedTextureHandle;

@interface RESharedTexturePayload : RESharedResourcePayload

@property (readonly, nonatomic) MTLSharedTextureHandle *handle;
@property (readonly, nonatomic) char isLimitedRenderAsset;
@property (readonly, nonatomic) unsigned long long semantic;
@property (readonly, nonatomic) NSString *colorSpace;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (char)hasSameUnderlyingIOSurface:(id)a0;
- (id)initWithTexture:(id)a0 isLimitedRenderAsset:(char)a1 semantic:(unsigned long long)a2 colorSpace:(id)a3;

@end
