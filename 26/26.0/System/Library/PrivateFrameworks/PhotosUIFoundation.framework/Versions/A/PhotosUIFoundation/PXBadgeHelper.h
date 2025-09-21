@class NSImage, NSImageSymbolConfiguration;

@interface PXBadgeHelper : NSObject

@property (class, readonly, nonatomic) NSImage *gradientImage;
@property (class, readonly, nonatomic) NSImage *spatialBadgeImage;
@property (class, readonly, nonatomic) NSImage *livePhotoBadgeShadowedImage;
@property (class, readonly, nonatomic) NSImage *loopingBadgeImage;
@property (class, readonly, nonatomic) NSImage *loopingBadgeTemplateImage;
@property (class, readonly, nonatomic) NSImage *cloudBadgeImage;
@property (class, readonly, nonatomic) NSImage *sharedLibraryBadgeImage;
@property (class, readonly, nonatomic) NSImage *sensitiveWarningBadgeImage;
@property (class, readonly, nonatomic) NSImage *sensitiveWarningBadgeImageMini;
@property (class, readonly, nonatomic) NSImage *contentSyndicationBadgeImage;
@property (class, readonly, nonatomic) NSImage *ocrAssetBadgeImage;
@property (class, readonly, nonatomic) NSImageSymbolConfiguration *miniSymbolConfiguration;
@property (class, readonly, nonatomic) NSImageSymbolConfiguration *smallSymbolConfiguration;
@property (class, readonly, nonatomic) NSImageSymbolConfiguration *mediumSymbolConfiguration;
@property (class, readonly, nonatomic) NSImageSymbolConfiguration *largeSymbolConfiguration;

+ (id)_sensitiveWarningBadgeImageWithSymbolConfiguration:(id)a0;

@end
