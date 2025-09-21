@class VUINoClickThroughView, NSView, NSButton, NSGlassView;

@interface VUIFormSheetPresentationView : VUINoClickThroughView

@property (retain, nonatomic) VUINoClickThroughView *contentContainerView;
@property (retain, nonatomic) NSButton *dismissButton;
@property (retain, nonatomic) NSGlassView *glassView;
@property (retain, nonatomic) NSView *contentView;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (copy, nonatomic) id /* block */ dismissAction;
@property (nonatomic) BOOL shouldDismissOnTap;
@property (nonatomic) BOOL useGlassBackground;

- (void)updateLayer;
- (void)cancelOperation:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (BOOL)isFlipped;
- (void).cxx_destruct;
- (void)_dismissPresentationViewIfNeeded;
- (void)didDismissButtonPress;
- (void)updateGlassBackground;
- (void)updateGlassBackground:(BOOL)a0;

@end
