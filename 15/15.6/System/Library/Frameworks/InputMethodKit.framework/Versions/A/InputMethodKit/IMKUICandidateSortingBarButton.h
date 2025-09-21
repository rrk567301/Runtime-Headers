@class IMKUICandidateSortingBarView;

@interface IMKUICandidateSortingBarButton : NSButton

@property (nonatomic) char mousePointerInside;
@property (weak, nonatomic) IMKUICandidateSortingBarView *sortingBarView;
@property (nonatomic) long long trackingRectTag;

+ (id)standardBackgroundColor;

- (void).cxx_destruct;
- (char)accessibilityPerformPress;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
