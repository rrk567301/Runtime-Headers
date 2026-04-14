@interface SiriSharedUIStandardScrollView : NSScrollView

@property (nonatomic) BOOL scrollEnabled;

+ (BOOL)isCompatibleWithResponsiveScrolling;

- (void)setClipsToBounds:(BOOL)a0;
- (struct CGSize { double x0; double x1; })contentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (id)init;
- (BOOL)isFlipped;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })contentInset;
- (void)scrollWheel:(id)a0;
- (BOOL)wantsLayer;
- (void)addContentView:(id)a0;
- (id)contentViews;
- (BOOL)isSemanticContentAttributeRightToLeft;

@end
