@class NSTitlebarSeparatorView, NSString, NSView, NSTrackingArea, NSColor, NSLayoutConstraint, NSImageView, NSBox;
@protocol NSTabBarSyncedButtonDelegate;

@interface NSTabBarNewTabButton : NSButton <NSDraggingDestination, NSTabBarSyncedButton> {
    NSTrackingArea *_trackingArea;
    NSColor *_backgroundColor;
    NSImageView *_addImageView;
    NSTitlebarSeparatorView *_topBorderView;
    NSBox *_leadingBorderView;
    NSView *_backgroundHighlightView;
    NSLayoutConstraint *_backgroundHighlightLeadingConstraint;
    BOOL _mouseIsOverButton;
    BOOL _forcesActiveWindowState;
}

@property (nonatomic) BOOL forcesActiveWindowState;
@property (weak, nonatomic) id<NSTabBarSyncedButtonDelegate> buttonInTabSyncGroupDelegate;
@property (nonatomic, getter=isSyncedWithOtherButton) BOOL syncedWithOtherButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)width;
+ (id)installNewTabButtonInView:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)awakeFromNib;
- (void)_windowChangedKeyState;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (void)draggingExited:(id)a0;
- (void)draggingEnded:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (void)setHighlightStateToPressed:(BOOL)a0 hovered:(BOOL)a1;
- (void)updateDraggingItemsForDrag:(id)a0;
- (id)_dragTypes;
- (BOOL)prepareForDragOperation:(id)a0;
- (void)concludeDragOperation:(id)a0;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)setForcesActiveWindowState:(BOOL)a0;
- (BOOL)forcesActiveWindowState;
- (void)_finishInitialization;
- (void)_updateButtonHighlightWhenPressed:(BOOL)a0 hovered:(BOOL)a1 notifyNSTabBarSyncedButtonDelegate:(BOOL)a2;
- (id)_backgroundDefaultColor;
- (void)_setBackgroundColor:(id)a0 withAnimation:(id)a1;
- (BOOL)_windowIsActive;
- (id)_leadingBorderDefaultColor;
- (void)_updateButtonHighlightWhenPressed:(BOOL)a0 hovered:(BOOL)a1;
- (void)_updateButtonColors;
- (id)associatedWindow;
- (id)draggingDestination;

@end
