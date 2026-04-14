@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IMNetworkObserver : NSObject {
    NSString *_dataStatusIndicator;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned int _networkReachabilityFlags;
    long long _networkType;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSString *_operatorName;
    struct __SCNetworkReachability { } *_reachability;
    struct __CTServerConnection { } *_telephonyServer;
    BOOL _observing;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property long long networkType;
@property (readonly) NSString *connectionTypeHeader;
@property (readonly, getter=isObserving) BOOL observing;
@property (readonly) unsigned int networkReachabilityFlags;

+ (id)sharedInstance;
+ (id)_networkObserverLogConfig;
+ (BOOL)isLikelyToReachRemoteServerWithReachabilityFlags:(unsigned int)a0;

- (void)dealloc;
- (id)init;
- (id)operatorName;
- (void)beginObserving;
- (void)endObserving;
- (void)_applicationForegroundNotification:(id)a0;
- (void)_copyConnectionDataStatus:(id /* block */)a0;
- (unsigned int)_currentNetworkReachabilityFlags;
- (id)_dataStatusIndicator;
- (void)_handleTelephonyNotificationWithName:(struct __CFString { } *)a0 userInfo:(struct __CFDictionary { } *)a1;
- (long long)_networkTypeForReachabilityFlags:(unsigned int)a0;
- (long long)_networkTypeFromDataIndicator:(id)a0;
- (void)_postReachabilityFlagsChangedNotificationFromValue:(unsigned int)a0 toValue:(unsigned int)a1;
- (void)_postTypeChangedNotificationFromValue:(long long)a0 toValue:(long long)a1;
- (void)_reloadDataStatusIndicator;
- (void)_reloadNetworkType;
- (void)_reloadNetworkTypeWithReachabilityFlags:(unsigned int)a0;
- (long long)_setNetworkType:(long long)a0;
- (id)dataStatusIndicator;
- (BOOL)networkTypeIsCellularType:(long long)a0;
- (void)reloadNetworkType;
- (id)stringForNetworkType:(long long)a0;

@end
