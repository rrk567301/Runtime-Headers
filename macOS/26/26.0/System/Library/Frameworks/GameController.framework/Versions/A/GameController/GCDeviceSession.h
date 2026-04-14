@class NSString, NSArray, GCDeviceCollection, NSSet, _GCCurrentApplicationAlertManager, _GCGameOverlayMonitor, NSObject, _GCHIDEventSubject, GCHIDEventSystemClient, GCDeviceSessionConfiguration, _GCCurrentApplicationForegroundMonitor;
@protocol OS_dispatch_queue;

@interface GCDeviceSession : NSObject <GCCurrentApplicationForegroundObserver, _GCCurrentApplicationAlertVisibilityObserver, _GCGameOverlayPresentationObserver, GCDeviceSession> {
    GCDeviceSessionConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSObject<OS_dispatch_queue> *_targetEventQueue;
    _Atomic unsigned int _state;
    _GCCurrentApplicationForegroundMonitor *_foregroundMonitor;
    _GCCurrentApplicationAlertManager *_alertManager;
    _GCGameOverlayMonitor *_gameOverlayMonitor;
    GCHIDEventSystemClient *_hidEventSystemClient;
    id /* block */ _eventHandler;
    id /* block */ _eventHandlerPrivate;
    id /* block */ _swift_eventHandler;
    NSSet *_devices;
    GCDeviceCollection *_devicesCollection;
    GCDeviceCollection *_keyboardsCollection;
    GCDeviceCollection *_miceCollection;
    GCDeviceCollection *_controllersCollection;
    GCDeviceCollection *_racingWheelsCollection;
    GCDeviceCollection *_spatialAccessoriesCollection;
    GCDeviceCollection *_stylusesCollection;
}

@property (copy, nonatomic) NSArray *deviceProviderTypes;
@property (readonly, copy) GCDeviceSessionConfiguration *configuration;
@property (retain) NSObject<OS_dispatch_queue> *targetQueue;
@property (copy) id /* block */ eventHandler;
@property (readonly, copy) GCDeviceCollection *allDevices;
@property (readonly, copy) GCDeviceCollection *keyboards;
@property (readonly, copy) GCDeviceCollection *mice;
@property (readonly, copy) GCDeviceCollection *controllers;
@property (readonly, copy) GCDeviceCollection *racingWheels;
@property (readonly, copy) GCDeviceCollection *spatialAccessories;
@property (readonly, copy) GCDeviceCollection *styluses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSObject<OS_dispatch_queue> *sessionEventQueue;
@property (readonly) _GCHIDEventSubject *hidEventSource;
@property (readonly) NSSet *deviceProviders;
@property (readonly) NSObject<OS_dispatch_queue> *sessionQueue;

+ (id)serviceFor:(id)a0 client:(id)a1;
+ (void)initialize;
+ (id)_ui_deviceProviderTypesForConfiguration:(id)a0;
+ (id)deviceProviderTypesForConfiguration:(id)a0;
+ (id)ui_hidEventSourceWithClient:(id)a0 queue:(id)a1;
+ (id)ui_serviceFor:(id)a0 client:(id)a1;

- (void)dealloc;
- (id)serviceFor:(id)a0 client:(id)a1;
- (void)invalidate;
- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)activateWithCompletionHandler:(id /* block */)a0;
- (void)CBApplicationWillResignActive;
- (void)gameOverlayPresentationChanged:(BOOL)a0;
- (void)CBApplicationDidBecomeActive;
- (id)stylusesPrivate;
- (void)alertVisibilityDidChange:(BOOL)a0;
- (id)controllersPrivate;
- (id)devicesPrivate;
- (id /* block */)eventHandlerPrivate;
- (id)eventTargetQueue;
- (id)initWithConfiguration:(id)a0 environment:(id)a1;
- (id)keyboardsPrivate;
- (id)micePrivate;
- (id)racingWheelsPrivate;
- (void)setEventHandlerPrivate:(id /* block */)a0;
- (void)setEventTargetQueue:(id)a0;
- (id)spatialAccessoriesPrivate;
- (id)ui_serviceFor:(id)a0 client:(id)a1;

@end
