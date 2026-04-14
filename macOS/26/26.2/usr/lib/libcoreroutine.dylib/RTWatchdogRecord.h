@class NSDate;
@protocol RTWatchdogProtocol;

@interface RTWatchdogRecord : NSObject

@property (weak, nonatomic) id<RTWatchdogProtocol> object;
@property (retain, nonatomic) NSDate *checkInStartDate;
@property (retain, nonatomic) NSDate *checkInStopDate;
@property (readonly, nonatomic) double timeout;

- (id)initWithObject:(id)a0 timeout:(double)a1;
- (void).cxx_destruct;
- (double)getLatency;
- (id)description;
- (BOOL)isPendingCheckIn;
- (id)init;

@end
