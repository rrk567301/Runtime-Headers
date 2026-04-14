@interface SiriSharedUIStandardScrollView : NSScrollView

@property (nonatomic) BOOL scrollEnabled;

+ (BOOL)isCompatibleWithResponsiveScrolling;

- (id)init;
- (BOOL)wantsLayer;
- (void)scrollWheel:(id)a0;
- (BOOL)isFlipped;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })contentInset;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (void)addContentView:(id)a0;
- (id)contentViews;
- (BOOL)isSemanticContentAttributeRightToLeft;

@end
