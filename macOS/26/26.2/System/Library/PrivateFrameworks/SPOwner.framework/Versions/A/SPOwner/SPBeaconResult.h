@class NSDate;

@interface SPBeaconResult : NSObject

@property (nonatomic) BOOL shouldBeacon;
@property (copy, nonatomic) NSDate *nextStateChangeDate;

- (void).cxx_destruct;
- (id)description;
- (id)initWithShouldBeacon:(BOOL)a0 nextStateChangeDate:(id)a1;

@end
