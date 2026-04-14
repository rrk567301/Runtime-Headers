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

+ (id)zeroOutVersionWithDeviceType:(id)a0;
+ (id)currentDevice;

- (id)processNameHeader;
- (id)platformBuildVersion;
- (void)_initPlatform;
- (id)buildVersionHeader;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isFocusDevice;
- (id)userAgentWithProcessName:(id)a0 protocolVersion:(id)a1;
- (BOOL)isDevelopmentDevice;
- (BOOL)isProductType:(unsigned int)a0;

@end
