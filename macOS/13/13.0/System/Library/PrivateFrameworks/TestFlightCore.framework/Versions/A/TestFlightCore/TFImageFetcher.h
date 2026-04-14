@interface TFImageFetcher : NSObject

@property (readonly, nonatomic) double displayedScreenScale;

- (id)init;
- (void)fetchIconArtwork:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1 intoView:(id)a2 animated:(BOOL)a3;
- (id)_urlStringForIconArtwork:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1 fileFormat:(id)a2;

@end
