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
- (void)_initPlatform;
- (BOOL)isProductType:(unsigned int)a0;
- (BOOL)isDevelopmentDevice;
- (id)init;
- (id)processNameHeader;
- (BOOL)isFocusDevice;
- (id)userAgentWithProcessName:(id)a0 protocolVersion:(id)a1;
- (id)platformBuildVersion;
- (void).cxx_destruct;

@end
