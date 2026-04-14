@class NSNumber;

@interface CHIPApplianceControlClusterSignalStateNotificationParams : NSObject

@property (retain, nonatomic) NSNumber *applianceStatus;
@property (retain, nonatomic) NSNumber *remoteEnableFlagsAndDeviceStatus2;
@property (retain, nonatomic) NSNumber *applianceStatus2;

- (id)init;
- (void).cxx_destruct;

@end
