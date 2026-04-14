@class NSMutableArray;

@interface _NSLevelIndicatorDiscreteCapacityCore : _NSLevelIndicatorAppearanceBasedVisualProvider {
    NSMutableArray *_segmentFillViews;
    NSMutableArray *_segmentTrackViews;
    NSMutableArray *_segmentOutlineViews;
}

- (void)detach;
- (id)init;
- (void).cxx_destruct;
- (void)_drawSingleSegmentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(id)a1 withState:(struct { double x0; double x1; double x2; double x3; double x4; int x5; int x6; double x7; double x8; double x9; id x10; id x11; id x12; id x13; id x14; id x15; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; })a2 withTintColor:(id)a3;
- (id)_segmentImageForState:(struct { double x0; double x1; double x2; double x3; double x4; int x5; int x6; double x7; double x8; double x9; id x10; id x11; id x12; id x13; id x14; id x15; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; })a0 tintColor:(id)a1;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsetsForState:(struct { double x0; double x1; double x2; double x3; double x4; int x5; int x6; double x7; double x8; double x9; id x10; id x11; id x12; id x13; id x14; id x15; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; })a0;
- (void)drawFocusRingMaskForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 forState:(struct { double x0; double x1; double x2; double x3; double x4; int x5; int x6; double x7; double x8; double x9; id x10; id x11; id x12; id x13; id x14; id x15; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; })a2;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(id)a1 forState:(struct { double x0; double x1; double x2; double x3; double x4; int x5; int x6; double x7; double x8; double x9; id x10; id x11; id x12; id x13; id x14; id x15; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; })a2;
- (struct CGSize { double x0; double x1; })indicatorSizeForState:(struct { double x0; double x1; double x2; double x3; double x4; int x5; int x6; double x7; double x8; double x9; id x10; id x11; id x12; id x13; id x14; id x15; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; })a0;
- (void)layoutIndicatorWithState:(struct { double x0; double x1; double x2; double x3; double x4; int x5; int x6; double x7; double x8; double x9; id x10; id x11; id x12; id x13; id x14; id x15; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
