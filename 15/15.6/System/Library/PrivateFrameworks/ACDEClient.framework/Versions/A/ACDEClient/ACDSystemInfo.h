@class ACFFingerPrint, NSString;

@interface ACDSystemInfo : NSObject <ACMSystemInfoProtocol> {
    ACFFingerPrint *_fingerPrint;
}

@property (readonly) ACFFingerPrint *fingerPrint;
@property (readonly, nonatomic) NSString *MACAddress;
@property (readonly, nonatomic) NSString *IPAddress;
@property (readonly, nonatomic) NSString *uniqueDeviceIdentifier;
@property (readonly, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) char isRunningOnModernMobileSystem;
@property (readonly, nonatomic) char isTouchIDAvailable;
@property (readonly, nonatomic) char isRetailDevice;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) char isPreRelease;

- (void)dealloc;
- (char)isTouchIDAvailable;
- (char)isRetailDevice;

@end
