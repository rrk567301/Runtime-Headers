@class NSString;
@protocol MTLTexture;

@interface VFXClientTextureAsset : VFXCoreAsset

@property (retain, nonatomic) id<MTLTexture> texture;
@property (nonatomic) struct CGImage { } *CGImage;
@property (copy, nonatomic) NSString *clientIdentifier;

@end
