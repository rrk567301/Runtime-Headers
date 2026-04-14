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

- (void)_initPlatform;
- (id)userAgentWithProcessName:(id)a0 protocolVersion:(id)a1;
- (id)processNameHeader;
- (void).cxx_destruct;
- (id)platformBuildVersion;
- (BOOL)isFocusDevice;
- (id)buildVersionHeader;
- (BOOL)isProductType:(unsigned int)a0;
- (BOOL)isDevelopmentDevice;
- (id)init;

@end
