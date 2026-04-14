@class NSString;

@interface ISIconSegmentationFeedbackComplex : NSObject <ISIconSegmentationFeedbackForeground, ISIconSegmentationFeedbackBackground>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGColor { } *meanColor;

- (void)dealloc;
- (id)initWithMeanColor:(struct CGColor { } *)a0;

@end
