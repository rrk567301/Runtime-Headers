@class NSDate;

@interface SCRMutableSchedulingConfiguration : SCRSchedulingConfiguration

@property (retain, nonatomic) NSDate *latestStartDate;
@property (copy, nonatomic) NSDate *earliestStartDate;
@property (nonatomic) double schedulingWindow;
@property (nonatomic) char wakeDeviceForDeadline;
@property (nonatomic) char requiresClassAAccess;
@property (nonatomic) char requiresNetworkAccess;

- (void)setLatestStartDate:(id)a0;

@end
