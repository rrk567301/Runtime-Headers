@class NSDate;

@interface SPBeaconResult : NSObject

@property (nonatomic) char shouldBeacon;
@property (copy, nonatomic) NSDate *nextStateChangeDate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithShouldBeacon:(char)a0 nextStateChangeDate:(id)a1;

@end
