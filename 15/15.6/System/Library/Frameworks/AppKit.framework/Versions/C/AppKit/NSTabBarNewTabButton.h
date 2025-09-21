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
    char _mouseIsOverButton;
    char _forcesActiveWindowState;
}

@property (nonatomic) char forcesActiveWindowState;
@property (weak, nonatomic) id<NSTabBarSyncedButtonDelegate> buttonInTabSyncGroupDelegate;
@property (nonatomic, getter=isSyncedWithOtherButton) char syncedWithOtherButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)width;
+ (id)installNewTabButtonInView:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)draggingExited:(id)a0;
- (char)_windowIsActive;
- (id)_backgroundDefaultColor;
- (id)_dragTypes;
- (void)_finishInitialization;
- (id)_leadingBorderDefaultColor;
- (void)_setBackgroundColor:(id)a0 withAnimation:(id)a1;
- (void)_updateButtonColors;
- (void)_updateButtonHighlightWhenPressed:(char)a0 hovered:(char)a1;
- (void)_updateButtonHighlightWhenPressed:(char)a0 hovered:(char)a1 notifyNSTabBarSyncedButtonDelegate:(char)a2;
- (void)_windowChangedKeyState;
- (char)allowsVibrancy;
- (id)associatedWindow;
- (void)awakeFromNib;
- (void)concludeDragOperation:(id)a0;
- (id)draggingDestination;
- (void)draggingEnded:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (void)drawFocusRingMask;
- (char)forcesActiveWindowState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (char)performDragOperation:(id)a0;
- (char)prepareForDragOperation:(id)a0;
- (void)setForcesActiveWindowState:(char)a0;
- (void)setHighlightStateToPressed:(char)a0 hovered:(char)a1;
- (void)updateDraggingItemsForDrag:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (char)wantsPeriodicDraggingUpdates;

@end
