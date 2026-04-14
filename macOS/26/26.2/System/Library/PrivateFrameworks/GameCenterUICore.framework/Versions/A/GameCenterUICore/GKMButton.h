@class GKUITheme;

@interface GKMButton : NSButton

@property (retain, nonatomic) GKUITheme *theme;
@property (nonatomic) int buttonKind;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (Class)cellClass;

- (id)initWithCoder:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)dealloc;
- (void)_gkConfigForNavbar;
- (id)initWithButtonKind:(int)a0;
- (id)initWithButtonKind:(int)a0 theme:(id)a1;

@end
