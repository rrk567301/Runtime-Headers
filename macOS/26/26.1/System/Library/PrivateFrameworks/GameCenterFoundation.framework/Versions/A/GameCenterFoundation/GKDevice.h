@class NSString;

@interface GKDevice : NSObject {
    NSString *_udid;
}

@property (retain, nonatomic) NSString *deviceType;
@property (retain, nonatomic) NSString *versionlessDeviceType;
@property (readonly, nonatomic) NSString *udid;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSString *gameKitVersion;
@property (readonly, nonatomic, getter=isGameKitAvailable) BOOL gameKitAvailable;

+ (id)currentDevice;
+ (id)zeroOutVersionWithDeviceType:(id)a0;

- (id)buildVersionHeader;
- (BOOL)isProductType:(unsigned int)a0;
- (id)processNameHeader;
- (id)userAgentWithProcessName:(id)a0 protocolVersion:(id)a1;
- (BOOL)isDevelopmentDevice;
- (id)platformBuildVersion;
- (void).cxx_destruct;
- (void)_initPlatform;
- (BOOL)isFocusDevice;
- (id)init;

@end
