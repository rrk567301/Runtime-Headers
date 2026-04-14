@class NSArray, SATimestamp, SAFanSpeed;

@interface SAAuxiliaryData : NSObject {
    SAFanSpeed *_fanSpeed;
    NSArray *_mountStatus;
    SATimestamp *_timestamp;
}

+ (id)auxiliaryDataForTimestamp:(id)a0;

- (void).cxx_destruct;

@end
