@class NSImage, ICImageAndMovieThumbnailView;

@interface ICCollapsibleThumbnailView : ICCollapsibleBaseView

@property (retain, nonatomic) ICImageAndMovieThumbnailView *thumbnailView;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) char showAsMovie;

- (void).cxx_destruct;
- (void)performSetup;
- (char)accessibilityIgnoresInvertColors;

@end
