@class NSString, NSMutableArray;

@interface _NSLevelIndicatorDiscreteCapacityCore : NSObject <_NSLevelIndicatorCore> {
    NSMutableArray *_segmentLayers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)layoutSublayersOfLayer:(id)a0 forState:(struct { double x0; double x1; double x2; double x3; double x4; int x5; int x6; double x7; double x8; id x9; id x10; id x11; id x12; id x13; id x14; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; })a1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(id)a1 forState:(struct { double x0; double x1; double x2; double x3; double x4; int x5; int x6; double x7; double x8; id x9; id x10; id x11; id x12; id x13; id x14; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; })a2;
- (int)vibrancyBlendModeForState:(struct { double x0; double x1; double x2; double x3; double x4; int x5; int x6; double x7; double x8; id x9; id x10; id x11; id x12; id x13; id x14; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; })a0;
- (struct CGSize { double x0; double x1; })indicatorSizeForState:(struct { double x0; double x1; double x2; double x3; double x4; int x5; int x6; double x7; double x8; id x9; id x10; id x11; id x12; id x13; id x14; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsetsForState:(struct { double x0; double x1; double x2; double x3; double x4; int x5; int x6; double x7; double x8; id x9; id x10; id x11; id x12; id x13; id x14; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; })a0;
- (void)updateLayer:(id)a0 forState:(struct { double x0; double x1; double x2; double x3; double x4; int x5; int x6; double x7; double x8; id x9; id x10; id x11; id x12; id x13; id x14; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; })a1;
- (void)drawFocusRingMaskInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(id)a1 forState:(struct { double x0; double x1; double x2; double x3; double x4; int x5; int x6; double x7; double x8; id x9; id x10; id x11; id x12; id x13; id x14; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; })a2;
- (void)_drawSingleSegmentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(id)a1 withState:(struct { double x0; double x1; double x2; double x3; double x4; int x5; int x6; double x7; double x8; id x9; id x10; id x11; id x12; id x13; id x14; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; })a2 withTintColor:(id)a3;
- (void)_updateSingleSegmentLayer:(id)a0 withState:(struct { double x0; double x1; double x2; double x3; double x4; int x5; int x6; double x7; double x8; id x9; id x10; id x11; id x12; id x13; id x14; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; })a1 withTintColor:(id)a2;
- (id)_fillLayerInLayer:(id)a0;
- (id)_outlineLayerInLayer:(id)a0;

@end
