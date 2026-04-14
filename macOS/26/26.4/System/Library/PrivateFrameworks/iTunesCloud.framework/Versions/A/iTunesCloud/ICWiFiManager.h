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

- (void).cxx_destruct;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (BOOL)_getWiFiEnabledFromPrefs;
- (id)init;
- (id)_processIdentifier;
- (void)_wifiCallBack:(unsigned int)a0;
- (BOOL)_getWiFiAssociated;
- (void)dealloc;

@end
