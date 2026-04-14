@interface AMSUIBubbleTipInlineAnchorInfo : NSObject

@property unsigned long long arrowDirection;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } anchorRect;
@property double arrowOffset;
@property double relativeArrowOffset;

- (id)initWithAnchorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithArrowDirection:(unsigned long long)a0 arrowOffset:(double)a1;
- (id)initWithArrowDirection:(unsigned long long)a0 relativeArrowOffset:(double)a1;

@end
