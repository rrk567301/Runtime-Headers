@class NSString, GKEventEmitter;
@protocol GKLockStatusObserver;

@interface GKDevice : NSObject {
    NSString *_udid;
}

@property (retain, nonatomic) GKEventEmitter<GKLockStatusObserver> *emitter;
@property (retain, nonatomic) NSString *deviceType;
@property (readonly, nonatomic) NSString *udid;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSString *gameKitVersion;
@property (readonly, nonatomic, getter=isGameKitAvailable) BOOL gameKitAvailable;
@property (readonly, nonatomic, getter=isInternalBuild) BOOL internalBuild;

+ (id)currentDevice;
+ (id)storeUserAgentWithDeviceType:(id)a0 osVersion:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)userAgent;
- (void)_initPlatform;
- (void)addLockStatusObserver:(id)a0;
- (void)beginObservingKeyBagStatusWithCallback:(void /* function */ *)a0;
- (id)buildVersionHeader;
- (BOOL)isDevelopmentDevice;
- (BOOL)isFocusDevice;
- (BOOL)isProductType:(unsigned int)a0;
- (id)platformBuildVersion;
- (id)processNameHeader;
- (id)protocolVersionHeader;
- (void)removeLockStatusObserver:(id)a0;
- (void)stopObservingKeyBagStatus;
- (id)storeUserAgent;
- (id)userAgentWithProcessName:(id)a0 protocolVersion:(id)a1;

@end
