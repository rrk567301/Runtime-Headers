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

- (void)dealloc;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)setImage:(id)a0;
- (id)_item;
- (id)initWithItem:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)designatedFocusRingView;
- (BOOL)refusesFirstResponder;
- (BOOL)sendAction;
- (void)setBordered:(BOOL)a0;
- (void)setBezelColor:(id)a0;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;
- (void)_updateImageScale;
- (void)_updateTitleAndLabelConfiguration;
- (void)_updateButtonStyle;
- (void)invalidateCachedDrawingImage;
- (id)cachedDrawingImage;

@end
