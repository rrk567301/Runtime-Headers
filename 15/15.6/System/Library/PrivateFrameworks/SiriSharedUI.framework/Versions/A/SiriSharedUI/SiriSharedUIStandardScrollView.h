@interface SiriSharedUIStandardScrollView : NSScrollView

@property (nonatomic) char scrollEnabled;

+ (char)isCompatibleWithResponsiveScrolling;

- (id)init;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })contentInset;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (struct CGSize { double x0; double x1; })contentSize;
- (char)isFlipped;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)scrollWheel:(id)a0;
- (void)setClipsToBounds:(char)a0;
- (char)wantsLayer;
- (void)addContentView:(id)a0;
- (id)contentViews;
- (char)isSemanticContentAttributeRightToLeft;

@end
