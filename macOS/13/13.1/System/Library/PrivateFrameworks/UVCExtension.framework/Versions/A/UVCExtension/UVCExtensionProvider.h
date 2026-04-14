@class NSSet, NSString, NSMutableSet, HIDEventSystemClient, NSObject;
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
    NSMutableSet *_pendingTerminationDevices;
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
- (id)providerPropertiesForProperties:(id)a0 error:(id *)a1;
- (BOOL)setProviderProperties:(id)a0 error:(id *)a1;
- (void)disconnectClient:(id)a0;
- (BOOL)connectClient:(id)a0 error:(id *)a1;
- (BOOL)removeDevice:(id)a0 error:(id *)a1;
- (void)powerNotification:(unsigned long long)a0 args:(void *)a1;
- (void)postEventOnAllDevices:(id)a0;
- (BOOL)setupPowerStateListener;
- (id)initWithBundleID:(id)a0 queue:(id)a1;
- (void)devicesConnect:(unsigned int)a0;
- (void)deviceConnect:(unsigned int)a0;
- (void)updateDeviceStateForSessionState:(id)a0;
- (BOOL)clearStaleMatchingDeviceForService:(unsigned int)a0;
- (void)deviceDisconnect:(id)a0;
- (void)repostPendingTerminationDeviceDiscoveryForUUID:(id)a0;
- (struct __CFDictionary { } *)createMatchingDictionary;
- (BOOL)setupMatching;
- (BOOL)setupHIDEventListener;
- (void)updateRollAngle;
- (void)displayConfigurationChanges:(unsigned int)a0;
- (void)displayConfigurationChangesSync:(unsigned int)a0;
- (void)resetCGSNotifications;
- (void)handleCGSEvent;
- (BOOL)waitForSessionActivation;
- (BOOL)setupServerPort;
- (BOOL)setupCGSNotifications;
- (BOOL)registerCGSNotifications;

@end
