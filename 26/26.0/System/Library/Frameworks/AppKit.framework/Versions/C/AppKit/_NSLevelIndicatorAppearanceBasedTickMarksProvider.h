@class NSLevelIndicatorCell, NSString, NSMutableArray;

@interface _NSLevelIndicatorAppearanceBasedTickMarksProvider : NSObject <_NSLevelIndicatorTickMarksProvider> {
    NSMutableArray *_tickMarkViews;
    long long _previousNumberOfTickMarks;
    long long _previousNumberOfMajorTickMarks;
}

@property (readonly, weak, nonatomic) NSLevelIndicatorCell *cell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_metricsForDrawOptions:(id)a0 inAppearance:(id)a1 outSize:(struct CGSize { double x0; double x1; } *)a2 outAlignmentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a3;
+ (id)_coreUIDrawOptionsForMajorTickMark;
+ (id)_coreUIDrawOptionsForMinorTickMark;
+ (void)majorTickMarkMetricsInAppearance:(id)a0 outSize:(struct CGSize { double x0; double x1; } *)a1 outAlignmentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a2;
+ (void)minorTickMarkMetricsInAppearance:(id)a0 outSize:(struct CGSize { double x0; double x1; } *)a1 outAlignmentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a2;

- (void)detach;
- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectOfTickMarkAtIndex:(long long)a0 inView:(id)a1 state:(const struct { double x0; double x1; double x2; double x3; double x4; int x5; int x6; double x7; double x8; double x9; id x10; id x11; id x12; id x13; id x14; id x15; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; } *)a2 tickState:(const struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct NSEdgeInsets { double x0; double x1; double x2; double x3; } x2; struct CGSize { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; struct NSEdgeInsets { double x0; double x1; double x2; double x3; } x5; struct NSEdgeInsets { double x0; double x1; double x2; double x3; } x6; } *)a3;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct NSEdgeInsets { double x0; double x1; double x2; double x3; } x2; struct CGSize { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; struct NSEdgeInsets { double x0; double x1; double x2; double x3; } x5; struct NSEdgeInsets { double x0; double x1; double x2; double x3; } x6; })_tickStateForDrawingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 indicatorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 indicatorInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)attachToCell:(id)a0;
- (void)drawTickMarksWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inCell:(id)a1 drawingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 indicatorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 indicatorInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a4 state:(const struct { double x0; double x1; double x2; double x3; double x4; int x5; int x6; double x7; double x8; double x9; id x10; id x11; id x12; id x13; id x14; id x15; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; } *)a5;
- (void)layoutWithState:(const struct { double x0; double x1; double x2; double x3; double x4; int x5; int x6; double x7; double x8; double x9; id x10; id x11; id x12; id x13; id x14; id x15; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; } *)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 drawingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 indicatorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 indicatorInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfTickMarkAtIndex:(long long)a0 state:(const struct { double x0; double x1; double x2; double x3; double x4; int x5; int x6; double x7; double x8; double x9; id x10; id x11; id x12; id x13; id x14; id x15; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; } *)a1 drawingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 indicatorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 indicatorInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a4;

@end
