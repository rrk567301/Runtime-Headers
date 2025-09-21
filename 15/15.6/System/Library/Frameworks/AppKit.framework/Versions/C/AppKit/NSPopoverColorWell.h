@class NSString, NSButton, _NSDrawingHandlerView;

@interface NSPopoverColorWell : NSColorWell <NSPopoverDelegate> {
    char _rendersUsingSubviews;
    NSButton *_button;
    _NSDrawingHandlerView *_colorRenderer;
    struct { unsigned char _noSelection : 1; unsigned char _emptyColor : 1; unsigned char _emptyEnabled : 1; unsigned char _controlSize : 2; unsigned int _reserved : 27; } _flags;
}

@property char hasNoSelection;
@property (copy) id /* block */ afterRenderer;
@property (getter=isEmptyColorEnabled) char emptyColorEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_colorPopoverCreateIfNecessary:(char)a0;
+ (id)_bezelRenderingButton;
+ (void)drawEmptyColorSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enabled:(char)a1;
+ (void)drawNoColorSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enabled:(char)a1 active:(char)a2;
+ (id)emptyColor;
+ (id)nullColor;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)setColor:(id)a0;
- (char)_hasExtra10_11BordersInToolbars;
- (void)setControlSize:(unsigned long long)a0;
- (id)_bezelRenderingButton;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_colorSwatchEdgeInsets;
- (void)_commonInit;
- (void)_drawBorderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)_drawColor:(char)a0;
- (char)_effectivelySupportsAlpha;
- (char)_ownsColorPanelExclusively;
- (char)_shouldOrderFront;
- (void)_showPopover;
- (void)_windowChangedKeyState;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (unsigned long long)controlSize;
- (char)drawColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (char)isOpaque;
- (void)mouseDown:(id)a0;
- (void)performClick:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)setColorMatrixColorList:(id)a0;
- (void)setEmptyColorEnabled:(char)a0;
- (void)setNeedsDisplay:(char)a0;
- (void)setTopBarMatrixColorList:(id)a0;

@end
