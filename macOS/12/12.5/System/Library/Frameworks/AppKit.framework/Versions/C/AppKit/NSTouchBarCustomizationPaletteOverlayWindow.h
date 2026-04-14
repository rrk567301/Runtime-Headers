@class NSStackView, _NSCustomizationSheetBackgroundView, NSBox, _NSFunctionRowCustomizationDragTarget, NSLayoutConstraint, NSString, _NSOverlayBackgroundView, NSTouchBarCustomizationPaletteLabelPopoverView, NSViewController, NSTouchBarCustomizationPaletteCheckbox, NSView, NSTextField, NSTouchBarCustomizationPalettePushButton;

@interface NSTouchBarCustomizationPaletteOverlayWindow : NSWindow {
    _NSOverlayBackgroundView *_backgroundView;
    _NSCustomizationSheetBackgroundView *_sheetBackground;
    NSView *_sheetContainer;
    NSStackView *_verticalStack;
    NSStackView *_horizontalHeaderStack;
    NSTextField *_headerLabel;
    NSBox *_headerSeparator;
    NSTouchBarCustomizationPaletteCheckbox *_quicktypeCheckbox;
    NSTouchBarCustomizationPalettePushButton *_doneButton;
    NSTouchBarCustomizationPaletteLabelPopoverView *_labelView;
    struct CGPoint { double x; double y; } _dragLocation;
    NSString *_dragLabel;
    NSLayoutConstraint *_doneButtonWidthConstraint;
    NSLayoutConstraint *_headerLabelInsetConstraint;
    NSLayoutConstraint *_leadingPaletteViewConstraint;
    NSLayoutConstraint *_trailingPaletteViewConstraint;
}

@property BOOL showQuickType;
@property (retain) NSViewController *paletteContentViewController;
@property double paletteScaleFactor;
@property (readonly, retain) _NSFunctionRowCustomizationDragTarget *screenBottomDragTarget;
@property BOOL debugMode;
@property struct CGPoint { double x0; double x1; } dragLocation;
@property struct CGSize { double width; double height; } dragSize;
@property (copy) NSString *dragLabel;

- (void)dealloc;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)orderOut:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (BOOL)_blocksActionWhenModal:(SEL)a0;
- (void)_dismissModalForTerminate;
- (BOOL)_isNonactivatingPanel;
- (BOOL)_wantsSnapshotProxyWindowForOrderOutAnimation;
- (void)_setModalWindowLevel;
- (void)done:(id)a0;
- (id)_headerLabelAttributedString;
- (id)_headerLabelFont;
- (void)toggleQuicktype:(id)a0;
- (double)_doneButtonWidth;
- (double)_horizontalHeaderStackSpacing;
- (double)_horizontalHeaderLabelSpacing;
- (double)_headerLabelInset;
- (double)_verticalStackSpacing;
- (double)_postHeaderSpacing;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_verticalStackInsets;
- (double)_paletteHorizontalInsets;
- (void)_appDidDeactivate:(id)a0;
- (void)_windowDidBecomeKey:(id)a0;
- (void)_quickTypeDidChange:(id)a0;
- (void)_handleIntrusion;
- (id)initWithScreen:(id)a0 displayID:(int)a1 paletteContent:(id)a2;
- (void)animateIn;
- (void)animateOut;
- (BOOL)_blocksKeyAndMainWindowTouchBarsWhenModal;

@end
