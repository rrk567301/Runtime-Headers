@class SMSessionManagerState, NSDate;

@interface SMWatchdogRecord : NSObject

@property (readonly, nonatomic) SMSessionManagerState *state;
@property (readonly, nonatomic) double timeout;
@property (copy, nonatomic) NSDate *startDate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithState:(id)a0 timeout:(double)a1;

@end
