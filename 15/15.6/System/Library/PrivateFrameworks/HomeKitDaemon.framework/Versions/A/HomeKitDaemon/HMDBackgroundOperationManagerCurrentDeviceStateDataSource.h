@interface HMDBackgroundOperationManagerCurrentDeviceStateDataSource : NSObject <HMDBackgroundOperationManagerCurrentDeviceStateDataSource>

@property (readonly, nonatomic) char isiOSDevice;
@property (readonly, nonatomic) char isAppleTV;
@property (readonly, nonatomic) char isHomePod;
@property (readonly, nonatomic) char isDesignatedFMFDevice;

- (id)currentDate;
- (id)timerWithTimeInterval:(double)a0 options:(unsigned long long)a1 label:(id)a2;

@end
