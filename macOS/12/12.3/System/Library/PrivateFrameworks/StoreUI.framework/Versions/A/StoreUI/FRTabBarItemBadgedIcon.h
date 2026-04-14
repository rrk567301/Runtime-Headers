@class NSImage;

@interface FRTabBarItemBadgedIcon : NSObject

@property (retain, nonatomic) NSImage *icon;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } badgeRect;

- (void).cxx_destruct;
- (id)initWithIcon:(id)a0 badgeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
