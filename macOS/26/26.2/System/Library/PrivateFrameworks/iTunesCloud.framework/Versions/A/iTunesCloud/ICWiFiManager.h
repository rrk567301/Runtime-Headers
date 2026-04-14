@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ICWiFiManager : NSObject <ICEnvironmentMonitorObserver> {
    struct __SCPreferences { } *_wifiPreferences;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (nonatomic, getter=isWiFiEnabled) BOOL wiFiEnabled;
@property (nonatomic, getter=isWiFiAssociated) BOOL wiFiAssociated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedWiFiManager;

- (BOOL)_getWiFiEnabledFromPrefs;
- (void).cxx_destruct;
- (BOOL)_getWiFiAssociated;
- (id)_processIdentifier;
- (id)init;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)dealloc;
- (void)_wifiCallBack:(unsigned int)a0;

@end
