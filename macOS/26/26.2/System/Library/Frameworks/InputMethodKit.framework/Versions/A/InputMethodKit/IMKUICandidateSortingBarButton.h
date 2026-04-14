@class IMKUICandidateSortingBarView;

@interface IMKUICandidateSortingBarButton : NSButton

@property (nonatomic) BOOL mousePointerInside;
@property (weak, nonatomic) IMKUICandidateSortingBarView *sortingBarView;
@property (nonatomic) long long trackingRectTag;

+ (id)standardBackgroundColor;

- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRoleDescription;

@end
