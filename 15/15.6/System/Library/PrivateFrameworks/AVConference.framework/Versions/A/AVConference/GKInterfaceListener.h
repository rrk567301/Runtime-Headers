@protocol InterfaceListenerDelegate;

@interface GKInterfaceListener : NSObject {
    struct __SCDynamicStore { } *_dynamicStore;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _notificationMutex;
    id _interfaceListenerDelegate;
    int _notifyToken;
    char _monitoringAvailable;
}

@property char _isWifiUp;
@property char _isCellUp;
@property id<InterfaceListenerDelegate> interfaceListenerDelegate;

- (void)dealloc;
- (id)init;
- (void)hasConnectionWithWifi:(char *)a0 cell:(char *)a1;
- (char)startChangeListener;
- (char)startRoutingChangeListener;
- (char)stopChangeListener;
- (void)stopRoutingChangeListener;

@end
