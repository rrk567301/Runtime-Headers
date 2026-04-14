@class NSArray;

@interface CSUObjectDetectionOptions : NSObject

@property (copy) NSArray *relevantClassNames;
@property float nmsThresholdDetection;
@property float detectionForegroundThreshold;

- (void).cxx_destruct;
- (id)init;

@end
