@class NSString;

@interface NSPopoverColorWell : NSColorWell <NSPopoverDelegate> {
    struct { unsigned char _noSelection : 1; unsigned char _emptyEnabled : 1; } _flags;
}

@property BOOL hasNoSelection;
@property (copy) id /* block */ afterRenderer;
@property (getter=isEmptyColorEnabled) BOOL emptyColorEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_colorPopoverCreateIfNecessary:(BOOL)a0;
+ (Class)_visualProviderClass;
+ (void)drawEmptyColorSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enabled:(BOOL)a1;
+ (id)emptyColor;
+ (id)nullColor;

- (void)mouseDown:(id)a0;
- (BOOL)isOpaque;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (void)setColor:(id)a0;
- (id)__visualProvider;
- (BOOL)_effectivelySupportsAlpha;
- (BOOL)_ownsColorPanelExclusively;
- (BOOL)_shouldOrderFront;
- (void)_showPopover;
- (void)_windowChangedKeyState;
- (void)performClick:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)setColorMatrixColorList:(id)a0;
- (void)setEmptyColorEnabled:(BOOL)a0;
- (void)setTopBarMatrixColorList:(id)a0;

@end
