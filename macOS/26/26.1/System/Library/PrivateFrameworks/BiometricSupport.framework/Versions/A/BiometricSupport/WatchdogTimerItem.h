@class NSString;

@interface WatchdogTimerItem : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;

- (void).cxx_destruct;

@end
