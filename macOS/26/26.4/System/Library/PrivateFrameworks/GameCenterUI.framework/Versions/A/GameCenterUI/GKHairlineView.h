@interface GKHairlineView : NSView

@property (nonatomic) long long alignment;

+ (id)hairlineViewForAlignment:(long long)a0;

- (void)sizeToFit;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void)awakeFromNib;

@end
