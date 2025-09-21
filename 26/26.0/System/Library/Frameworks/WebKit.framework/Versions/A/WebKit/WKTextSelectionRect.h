@protocol WKTextSelectionRectDelegate;

@interface WKTextSelectionRect : NSTextSelectionRect {
    struct SelectionGeometry { struct FloatQuad { struct FloatPoint { float m_x; float m_y; } m_p1; struct FloatPoint { float m_x; float m_y; } m_p2; struct FloatPoint { float m_x; float m_y; } m_p3; struct FloatPoint { float m_x; float m_y; } m_p4; } m_quad; BOOL m_behavior; BOOL m_direction; int m_minX; int m_maxX; int m_maxY; int m_lineNumber; BOOL m_isLineBreak; BOOL m_isFirstOnLine; BOOL m_isLastOnLine; BOOL m_containsStart; BOOL m_containsEnd; BOOL m_isHorizontal; BOOL m_isInFixedPosition; BOOL m_separateFromPreviousLine; int m_pageNumber; struct optional<WebCore::IntRect> { union { char __null_state_; struct IntRect { struct IntPoint { int m_x; int m_y; } m_location; struct IntSize { int m_width; int m_height; } m_size; } __val_; } ; BOOL __engaged_; } m_cachedEnclosingRect; } _selectionGeometry;
    id<WKTextSelectionRectDelegate> _delegate;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (BOOL)isVertical;
- (id).cxx_construct;
- (id)initWithCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)containsEnd;
- (BOOL)containsStart;
- (id)initWithSelectionGeometry:(const void *)a0 delegate:(id)a1;

@end
