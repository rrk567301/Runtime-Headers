@class NSImage, NSImageView;

@interface ICCollapsibleImageView : ICCollapsibleBaseView

@property (retain, nonatomic) NSImageView *imageView;
@property (retain, nonatomic) NSImage *image;

- (void).cxx_destruct;
- (void)performSetup;
- (void)setAccessibilityElement:(char)a0;

@end
