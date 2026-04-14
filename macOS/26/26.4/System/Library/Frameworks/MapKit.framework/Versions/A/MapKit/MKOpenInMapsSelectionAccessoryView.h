@class NSURL, NSColor;

@interface MKOpenInMapsSelectionAccessoryView : MKSelectionAccessoryView {
    NSURL *_url;
    NSColor *_bgColor;
}

- (void)layout;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (id)_createButton;
- (void)_handlePress;
- (void)_updateLayerColor;

@end
