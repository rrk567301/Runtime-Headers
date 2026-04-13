@class NSImage, NSCursor;

@interface ButtonPlus : NSButton {
    BOOL _ignoresFirstMouse;
}

@property (nonatomic) BOOL usesCustomAlignmentRectInsets;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } customAlignmentRectInsets;
@property (retain, nonatomic) NSImage *imageForNonMainWindow;
@property (nonatomic) BOOL superviewIsFocusRingClipAncestor;
@property (retain, nonatomic) NSCursor *customCursor;

- (void).cxx_destruct;
- (void)resetCursorRects;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)_focusRingClipAncestor;
- (void)setAcceptsFirstMouse:(BOOL)a0;

@end
