@class NSSet, NSString, HIDEventSystemClient, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface UVCExtensionProvider : CMIOExtensionProvider <CMIOExtensionProviderSource> {
    struct IONotificationPort { } *_deviceNotificationPort;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isActive;
    unsigned int _matchingNotificationIterator;
    NSString *_bundleID;
    struct IONotificationPort { } *_powerNotificationPort;
    unsigned int _powerNotifier;
    unsigned int _powerNotifierConnect;
    HIDEventSystemClient *_hidEventSystemClient;
    unsigned int _cgsConnectionID;
    NSObject<OS_dispatch_source> *_cgsEventSource;
    unsigned int _cgsEventPort;
    unsigned int _wsServerPort;
    BOOL _cgsNotificationSet;
    NSObject<OS_dispatch_source> *_wsStatusSource;
    long long _bootArgs;
    BOOL _sessionActivated;
}

@property (readonly, copy) NSSet *availableProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)activate;
- (id)serialize;
- (BOOL)connectClient:(id)a0 error:(id *)a1;
- (void)disconnectClient:(id)a0;
- (id)providerPropertiesForProperties:(id)a0 error:(id *)a1;
- (BOOL)setProviderProperties:(id)a0 error:(id *)a1;
- (BOOL)removeDevice:(id)a0 error:(id *)a1;
- (void)powerNotification:(unsigned long long)a0 args:(void *)a1;
- (void)deviceConnect:(unsigned int)a0;
- (void)clearStaleMatchingDeviceForService:(unsigned int)a0;
- (void)updateDeviceStateForSessionState:(id)a0;
- (void)updateRollAngle;
- (void)deviceDisconnect:(id)a0;
- (void)postEventOnAllDevices:(id)a0;
- (void)displayConfigurationChangesSync:(unsigned int)a0;
- (BOOL)setupServerPort;
- (BOOL)waitForSessionActivation;
- (BOOL)registerCGSNotifications;
- (void)handleCGSEvent;
- (void)resetCGSNotifications;
- (BOOL)setupCGSNotifications;
- (BOOL)setupMatching;
- (BOOL)setupPowerStateListener;
- (BOOL)setupHIDEventListener;
- (id)initWithBundleID:(id)a0 queue:(id)a1;
- (void)devicesConnect:(unsigned int)a0;
- (void)displayConfigurationChanges:(unsigned int)a0;

@end
