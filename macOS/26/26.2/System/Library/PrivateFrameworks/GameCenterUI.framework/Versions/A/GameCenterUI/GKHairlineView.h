@interface GKHairlineView : NSView

@property (nonatomic) long long alignment;

+ (id)hairlineViewForAlignment:(long long)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)sizeToFit;
- (id)init;
- (void)awakeFromNib;

@end
