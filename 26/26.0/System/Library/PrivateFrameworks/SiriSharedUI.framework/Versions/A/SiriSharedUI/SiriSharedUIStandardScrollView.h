@interface SiriSharedUIStandardScrollView : NSScrollView

@property (nonatomic) BOOL scrollEnabled;

+ (BOOL)isCompatibleWithResponsiveScrolling;

- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })contentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })contentInset;
- (BOOL)isFlipped;
- (id)init;
- (void)setClipsToBounds:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (void)scrollWheel:(id)a0;
- (BOOL)wantsLayer;
- (void)addContentView:(id)a0;
- (id)contentViews;
- (BOOL)isSemanticContentAttributeRightToLeft;

@end
