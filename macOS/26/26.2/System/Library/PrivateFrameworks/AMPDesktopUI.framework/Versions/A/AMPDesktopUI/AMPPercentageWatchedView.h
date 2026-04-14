@class NSImageView;

@interface AMPPercentageWatchedView : NSView

@property (retain, nonatomic) NSImageView *checkmark;
@property (nonatomic) double percentageViewed;

+ (void)initialize;
+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)keyPathsForValuesAffectingShouldHideCheckmark;

- (void)commonInit;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (Class)valueClassForBinding:(id)a0;
- (id)propertyKeysForViewSpy;
- (BOOL)shouldHideCheckmark;

@end
