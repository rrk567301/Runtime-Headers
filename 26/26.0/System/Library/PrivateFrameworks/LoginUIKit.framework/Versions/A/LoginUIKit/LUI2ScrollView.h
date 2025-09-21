@interface LUI2ScrollView : NSScrollView

@property BOOL scrollingEnabled;

+ (BOOL)isCompatibleWithResponsiveScrolling;

- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)accessibilityIdentifier;
- (id)initWithCoder:(id)a0;
- (id)accessibilityChildren;
- (void)scrollWheel:(id)a0;
- (void)_setupScrollView;

@end
