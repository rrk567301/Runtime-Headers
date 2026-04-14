@interface GKHairlineView : NSView

@property (nonatomic) long long alignment;

+ (id)hairlineViewForAlignment:(long long)a0;

- (void)sizeToFit;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)awakeFromNib;

@end
