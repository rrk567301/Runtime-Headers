@class NSString, NSXPCConnection, LANotificationProxy, NSObject;
@protocol LANotificationXPC, LANotificationObserver;

@interface LANotification : NSObject <LANotificationObserverXPC> {
    NSXPCConnection *_connection;
    id<LANotificationXPC> _notification;
    BOOL _appMustBeActive;
    BOOL _waitingForActivation;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) id<LANotificationXPC> notification;
@property (readonly, nonatomic) LANotificationProxy *proxy;
@property (weak, nonatomic) NSObject<LANotificationObserver> *observer;
@property (nonatomic) BOOL notifyOnResume;
@property (nonatomic) BOOL appMustBeActive;
@property (readonly, nonatomic) NSObject *value;
@property (readonly, nonatomic) NSObject *oldValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)postNotificationWithNewValue:(id)a0 oldValue:(id)a1;
+ (BOOL)isAppActive;

- (void)dealloc;
- (void)resume;
- (void).cxx_destruct;
- (void)suspend;
- (id)initWithObserver:(id)a0;
- (void)newValue:(id)a0 oldValue:(id)a1 completionHandler:(id /* block */)a2;
- (void)_appActivityChanged:(id)a0;
- (void)postNewValue:(id)a0 oldValue:(id)a1;
- (void)_notifyObserverWithAction:(id)a0 completionHandler:(id /* block */)a1;
- (id)darwinNotificationForValue:(id)a0;
- (void)_observeAppActivity:(BOOL)a0;
- (id)_notificationNameWhenAppIsActive:(BOOL)a0;
- (void)_checkWaiting;

@end
