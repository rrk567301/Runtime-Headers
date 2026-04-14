@class NSImageView, NSBox, NSView, NSShadow;

@interface TabsLayoutPreviewButton : NSButton {
    NSBox *_selectionHighlightView;
    NSView *_shadowView;
    NSView *_imageContainerView;
    NSImageView *_wallpaperView;
    NSImageView *_windowPreviewView;
    NSImageView *_trafficLightsView;
    NSShadow *_shadow;
}

@property (nonatomic) long long previewKind;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)updateCell:(id)a0;
- (void)_accentColorChanged:(id)a0;
- (void)_commonTabsLayoutPreviewButtonInit;
- (void)_updatePreviewKind;
- (void)_updateSelectionStatus;
- (void)_updateTrafficLights;

@end
