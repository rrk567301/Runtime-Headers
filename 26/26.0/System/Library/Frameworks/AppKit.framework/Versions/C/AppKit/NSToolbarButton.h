@class NSView, NSString, NSToolbarItem;

@interface NSToolbarButton : NSButton {
    NSToolbarItem *_item;
    SEL _primaryAction;
    SEL _alternateAction;
    NSString *_primaryToolTip;
    NSString *_alternateToolTip;
    NSString *_primaryTitle;
    NSString *_alternateTitle;
    BOOL _showingRollover;
}

@property BOOL showingRollover;
@property (weak) NSView *focusRingView;

+ (void)initialize;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)dealloc;
- (id)_item;
- (id)initWithItem:(id)a0;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)_updateButtonStyle;
- (void)_updateImageScale;
- (void)_updateTitleAndLabelConfiguration;
- (id)cachedDrawingImage;
- (id)designatedFocusRingView;
- (void)invalidateCachedDrawingImage;
- (BOOL)refusesFirstResponder;
- (BOOL)sendAction;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;
- (void)setBezelColor:(id)a0;
- (void)setBordered:(BOOL)a0;

@end
