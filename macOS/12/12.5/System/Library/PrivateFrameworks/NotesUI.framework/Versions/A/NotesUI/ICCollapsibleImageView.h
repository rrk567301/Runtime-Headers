@class NSImage, NSImageView;

@interface ICCollapsibleImageView : ICCollapsibleBaseView

@property (retain, nonatomic) NSImageView *imageView;
@property (retain, nonatomic) NSImage *image;

- (void).cxx_destruct;
- (void)setAccessibilityElement:(BOOL)a0;
- (void)performSetup;

@end
