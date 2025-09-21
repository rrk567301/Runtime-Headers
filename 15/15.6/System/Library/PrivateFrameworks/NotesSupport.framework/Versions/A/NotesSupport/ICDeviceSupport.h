@class NSString;

@interface ICDeviceSupport : NSObject

@property (class, readonly, nonatomic) char deviceIsMac;
@property (class, readonly, nonatomic) char deviceIsVision;
@property (class, readonly, nonatomic) char processIsSiri;
@property (class, readonly, nonatomic) char deviceSupportsMetal;
@property (class, readonly, nonatomic) NSString *deviceName;
@property (class, readonly, nonatomic) char isRunningUnitTests;
@property (class, readonly, nonatomic) char isRunningDuoTests;
@property (class, readonly, nonatomic) char deviceIsWAPICapable;
@property (class, readonly, nonatomic) char isRunningInApp;
@property (class, readonly, nonatomic) NSString *productName;
@property (class, readonly, nonatomic) NSString *productVersion;
@property (class, readonly, nonatomic) NSString *productBuildVersion;

@end
