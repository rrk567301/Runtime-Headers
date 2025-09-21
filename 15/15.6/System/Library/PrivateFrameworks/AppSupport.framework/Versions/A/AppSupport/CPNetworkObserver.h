@class NSLock, NSMutableDictionary;

@interface CPNetworkObserver : NSObject {
    NSLock *_lock;
    NSMutableDictionary *_reachabilityRequests;
    unsigned int _networkReachability;
    struct __SCNetworkReachability { } *_networkReach;
    struct __CFDictionary { } *_networkObservers;
    struct __SCPreferences { } *_wifiPreferences;
    struct __CFDictionary { } *_wifiObservers;
    char _networkNotified;
    char _networkReachable;
    char _wifiNotified;
    char _wifiEnabled;
}

+ (id)sharedNetworkObserver;

- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)a0;
- (char)isWiFiEnabled;
- (char)isNetworkReachable;
- (void)removeNetworkReachableObserver:(id)a0;
- (void)addNetworkReachableObserver:(id)a0 selector:(SEL)a1;
- (void)_networkReachableFirstCallBack:(id)a0;
- (void)_networkObserversInitialize;
- (void)_networkReachableCallBack:(unsigned int)a0;
- (void)_wifiCallBack:(unsigned int)a0;
- (void)_wifiFirstCallBack:(id)a0;
- (void)_wifiObserversInitialize;
- (void)addObserver:(id)a0 selector:(SEL)a1 forHostname:(id)a2;
- (void)addWiFiObserver:(id)a0 selector:(SEL)a1;
- (void)removeObserver:(id)a0 forHostname:(id)a1;
- (void)removeWiFiObserver:(id)a0;

@end
