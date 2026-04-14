@class NSCursor;

@interface ButtonPlus : NSButton {
    BOOL _ignoresFirstMouse;
}

@property (nonatomic) double horizontalContentInset;
@property (nonatomic) double verticalContentInset;
@property (nonatomic) BOOL usesCustomAlignmentRectInsets;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } customAlignmentRectInsets;
@property (retain, nonatomic) NSCursor *customCursor;

- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)resetCursorRects;
- (void)setAcceptsFirstMouse:(BOOL)a0;

@end
