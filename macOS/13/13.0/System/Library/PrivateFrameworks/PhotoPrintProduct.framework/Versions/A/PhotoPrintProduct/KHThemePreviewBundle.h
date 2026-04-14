@class NSURL, KHThemePreviewManifest;

@interface KHThemePreviewBundle : NSObject

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) KHThemePreviewManifest *manifest;

+ (id)bundleWithURL:(id)a0;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)themePreviewForIdentifier:(id)a0;
- (id)allThemePreviews;
- (id)themePreviewsForProductCodes:(id)a0;

@end
