@class NSIndexSet;

@interface SegmentedControlWithDynamicWidth : NSSegmentedControl

@property (copy, nonatomic) NSIndexSet *indexesOfSegmentsWithDynamicWidths;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)awakeFromNib;
- (void)setSegmentCount:(long long)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateSegmentWidths;
- (double)_endCapWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSegment:(long long)a0;

@end
