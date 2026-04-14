@class NSString, GKEventEmitter;
@protocol GKLockStatusObserver;

@interface GKDevice : NSObject {
    NSString *_udid;
}

@property (retain, nonatomic) GKEventEmitter<GKLockStatusObserver> *emitter;
@property (retain, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *udid;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSString *gameKitVersion;
@property (readonly, nonatomic, getter=isGameKitAvailable) BOOL gameKitAvailable;

+ (id)currentDevice;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)userAgent;
- (void)_initPlatform;
- (void)beginObservingKeyBagStatusWithCallback:(void /* function */ *)a0;
- (void)stopObservingKeyBagStatus;
- (id)userAgentWithProcessName:(id)a0 protocolVersion:(id)a1;
- (id)processNameHeader;
- (id)storeUserAgent;
- (id)protocolVersionHeader;
- (id)buildVersionHeader;
- (id)platformBuildVersion;
- (void)addLockStatusObserver:(id)a0;
- (void)removeLockStatusObserver:(id)a0;
- (BOOL)isDevelopmentDevice;
- (BOOL)isFocusDevice;
- (BOOL)isProductType:(unsigned int)a0;

@end
