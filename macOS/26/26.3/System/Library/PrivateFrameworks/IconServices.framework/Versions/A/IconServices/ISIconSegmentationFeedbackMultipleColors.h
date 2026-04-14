@class NSString;

@interface ISIconSegmentationFeedbackMultipleColors : NSObject <ISIconSegmentationFeedbackForeground>

@property (readonly, nonatomic) int numberOfColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNumberOfColors:(int)a0;

@end
