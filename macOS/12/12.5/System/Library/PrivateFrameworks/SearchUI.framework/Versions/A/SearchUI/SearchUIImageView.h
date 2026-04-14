@class NSString, NSView, SearchUIButton, SFImage;

@interface SearchUIImageView : TLKImageView <TLKImageViewDelegate>

@property (retain, nonatomic) SFImage *currentImage;
@property (retain, nonatomic) SFImage *fallbackImage;
@property (retain, nonatomic) SearchUIButton *overlayPlayButton;
@property (retain, nonatomic) NSView *tintView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageViewWithImage:(id)a0;
+ (id)thumbnailForRowModel:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (void)resetCursorRects;
- (void)updateWithImage:(id)a0;
- (void)didUpdateWithImage:(id)a0;
- (void)didFailToLoadImage;
- (void)updateWithImage:(id)a0 fallbackImage:(id)a1 needsOverlayButton:(BOOL)a2;
- (void)appIconDidChange:(id)a0;
- (BOOL)clickable;

@end
