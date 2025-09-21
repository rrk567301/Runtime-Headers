@class NSImage, ICImageAndMovieThumbnailView;

@interface ICCollapsibleThumbnailView : ICCollapsibleBaseView

@property (retain, nonatomic) ICImageAndMovieThumbnailView *thumbnailView;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) BOOL showAsMovie;

- (BOOL)accessibilityIgnoresInvertColors;
- (void).cxx_destruct;
- (void)performSetup;

@end
