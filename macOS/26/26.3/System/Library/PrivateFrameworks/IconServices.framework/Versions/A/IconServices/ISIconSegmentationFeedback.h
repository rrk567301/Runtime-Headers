@protocol ISIconSegmentationFeedbackRecolor, ISIconSegmentationFeedbackForeground, ISIconSegmentationFeedbackBackground;

@interface ISIconSegmentationFeedback : NSObject

@property (readonly, nonatomic) id<ISIconSegmentationFeedbackForeground> foreground;
@property (readonly, nonatomic) id<ISIconSegmentationFeedbackBackground> background;
@property (readonly, nonatomic) id<ISIconSegmentationFeedbackRecolor> recolorForeground;

- (void).cxx_destruct;
- (id)initWithForeground:(id)a0 background:(id)a1 recolorForeground:(id)a2;

@end
