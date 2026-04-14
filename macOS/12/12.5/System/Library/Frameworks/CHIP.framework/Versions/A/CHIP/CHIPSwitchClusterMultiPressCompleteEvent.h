@class NSNumber;

@interface CHIPSwitchClusterMultiPressCompleteEvent : NSObject

@property (retain, nonatomic, getter=getNewPosition) NSNumber *newPosition;
@property (retain, nonatomic) NSNumber *totalNumberOfPressesCounted;

- (id)init;
- (void).cxx_destruct;

@end
