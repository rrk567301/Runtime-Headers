@class NSNumber;

@interface CHIPOnOffClusterOnWithTimedOffParams : NSObject

@property (retain, nonatomic) NSNumber *onOffControl;
@property (retain, nonatomic) NSNumber *onTime;
@property (retain, nonatomic) NSNumber *offWaitTime;

- (id)init;
- (void).cxx_destruct;

@end
