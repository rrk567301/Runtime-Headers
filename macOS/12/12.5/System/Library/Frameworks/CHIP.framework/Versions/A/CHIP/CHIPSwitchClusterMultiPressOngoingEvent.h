@class NSNumber;

@interface CHIPSwitchClusterMultiPressOngoingEvent : NSObject

@property (retain, nonatomic, getter=getNewPosition) NSNumber *newPosition;
@property (retain, nonatomic) NSNumber *currentNumberOfPressesCounted;

- (id)init;
- (void).cxx_destruct;

@end
