@class WBSCGImage, NSNumber, NSAppearance;

@interface WBSBackgroundImageResponse : WBSSiteMetadataResponse

@property (readonly, nonatomic) WBSCGImage *image;
@property (readonly, nonatomic, getter=isTiled) BOOL tiled;
@property (readonly, nonatomic) NSNumber *luminance;
@property (readonly, nonatomic) NSAppearance *appearance;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0 isTiled:(BOOL)a1 luminance:(id)a2 appearance:(id)a3;

@end
