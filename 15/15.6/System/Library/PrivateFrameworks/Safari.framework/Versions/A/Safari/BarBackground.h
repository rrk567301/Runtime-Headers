@class NSBannerView, NSTrackingArea, NSView, NSImage, NSVisualEffectView, BackgroundColorView, NSColor;
@protocol BarBackgroundMouseTrackingDelegate;

@interface BarBackground : KeyLoopSplicingContainerView {
    char _becomingFirstResponder;
    NSView *_mainContentContainerView;
    BackgroundColorView *_bottomBorderView;
    NSView *_backdropDarkeningView;
    NSVisualEffectView *_backdropView;
    NSBannerView *_appKitBannerView;
    NSTrackingArea *_trackingArea;
}

@property (readonly, retain, nonatomic) NSColor *defaultBottomBorderLineColor;
@property (nonatomic) char hasBottomBorder;
@property (retain, nonatomic) NSColor *bottomBorderColor;
@property char mouseDownCanMoveWindow;
@property (nonatomic) char usesBannerAppearance;
@property (nonatomic) char usesModernToolbarAppearance;
@property (nonatomic) char usesMaterialPreferredAppearance;
@property (retain, nonatomic) NSView *contentView;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSImage *backgroundImage;
@property (nonatomic) char usesUnderWindowMaterial;
@property (nonatomic) char usesAppKitBannerView;
@property (readonly, nonatomic) NSVisualEffectView *visualEffectView;
@property (weak, nonatomic) id<BarBackgroundMouseTrackingDelegate> mouseTrackingDelegate;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_windowChangedKeyState;
- (id)accessibilityRole;
- (void)commonInit;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isAccessibilityElement;
- (char)isOpaque;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)updateTrackingAreas;
- (void)viewDidMoveToWindow;
- (void)_addBackdropDarkeningViewForModernToolbarAppearance;
- (void)_addBackdropViewForModernToolbarAppearance;
- (void)_addBottomBorderViewForModernToolbarAppearance;
- (void)_applyUsesMaterialPreferredAppearance;
- (void)_drawBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_makeTrackingArea;
- (void)moveMainContentToView;

@end
