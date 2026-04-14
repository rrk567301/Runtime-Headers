@class NSString;

@interface ISIconSegmentationFeedbackBilinearGradient : NSObject <ISIconSegmentationFeedbackBackground, ISIconSegmentationFeedbackRecolor> {
    struct CGColor { } *_topLeftColor;
    struct CGColor { } *_topRightColor;
    struct CGColor { } *_bottomRightColor;
    struct CGColor { } *_bottomLeftColor;
}

@property (readonly, nonatomic) struct CGColor { } *meanColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)gradientWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithTopLeftColor:(struct CGColor { } *)a0 topRightColor:(struct CGColor { } *)a1 bottomRightColor:(struct CGColor { } *)a2 bottomLeftColor:(struct CGColor { } *)a3 meanColor:(struct CGColor { } *)a4;

@end
