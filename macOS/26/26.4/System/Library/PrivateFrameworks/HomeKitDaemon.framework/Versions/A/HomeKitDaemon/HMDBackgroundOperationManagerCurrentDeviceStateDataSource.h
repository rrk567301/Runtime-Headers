@interface HMDBackgroundOperationManagerCurrentDeviceStateDataSource : NSObject <HMDBackgroundOperationManagerCurrentDeviceStateDataSource>

@property (readonly, nonatomic) BOOL isiOSDevice;
@property (readonly, nonatomic) BOOL isAppleTV;
@property (readonly, nonatomic) BOOL isHomePod;
@property (readonly, nonatomic) BOOL isDesignatedFMFDevice;
@property (readonly, nonatomic) BOOL isHH2KeyRollingEnabled;

- (id)currentDate;
- (id)timerWithTimeInterval:(double)a0 options:(unsigned int)a1 label:(id)a2;

@end
