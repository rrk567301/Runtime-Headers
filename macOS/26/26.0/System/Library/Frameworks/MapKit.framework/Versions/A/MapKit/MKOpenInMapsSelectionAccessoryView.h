@class NSURL, NSColor;

@interface MKOpenInMapsSelectionAccessoryView : MKSelectionAccessoryView {
    NSURL *_url;
    NSColor *_bgColor;
}

- (void)layout;
- (id)initWithURL:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (id)_createButton;
- (void)_handlePress;
- (void)_updateLayerColor;

@end
