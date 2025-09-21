@class NSString, NSMutableData;

@interface BWMotionDataPreserver : NSObject {
    NSString *_name;
    NSMutableData *_preservedISPMotionData;
    unsigned long long _lengthOfInitialISPMotionData;
    int _sampleCountOfInitialISPMotionData;
    NSMutableData *_preservedISPHallData;
    unsigned long long _lengthOfInitialISPHallData;
    int _sampleCountOfInitialISPHallData;
    NSString *_currentISPHallPortType;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithName:(id)a0;
- (void)reset;
- (char)prependPreservedMotionDataToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (char)preserveMotionDataForSoonToBeDroppedSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
