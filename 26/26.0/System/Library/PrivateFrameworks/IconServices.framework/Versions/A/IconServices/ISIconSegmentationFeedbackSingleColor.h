@class NSString;

@interface ISIconSegmentationFeedbackSingleColor : NSObject <ISIconSegmentationFeedbackForeground, ISIconSegmentationFeedbackBackground, ISIconSegmentationFeedbackRecolor>

@property (readonly, nonatomic) struct CGColor { } *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGColor { } *meanColor;

- (void)dealloc;
- (id)initWithColor:(struct CGColor { } *)a0;

@end
