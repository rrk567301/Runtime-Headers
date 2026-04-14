@interface ABSyncScheduleOptions : NSObject

@property unsigned long long retryCount;
@property BOOL standby;
@property BOOL resetStandby;
@property BOOL clearify;

- (id)init;
- (id)commandArguments;

@end
