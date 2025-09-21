@class NSSet, NSString, NSMutableSet, HIDEventSystemClient, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface UVCExtensionProvider : CMIOExtensionProvider <CMIOExtensionProviderSource> {
    struct IONotificationPort { } *_deviceNotificationPort;
    NSObject<OS_dispatch_queue> *_queue;
    char _isActive;
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
    char _cgsNotificationSet;
    NSObject<OS_dispatch_source> *_wsStatusSource;
    long long _bootArgs;
    char _sessionActivated;
    NSMutableSet *_pendingTerminationDevices;
}

@property (readonly, copy) NSSet *availableProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isPlatformNotSupported;

- (void)dealloc;
- (void).cxx_destruct;
- (char)activate;
- (void)cancel;
- (id)serialize;
- (char)connectClient:(id)a0 error:(id *)a1;
- (void)disconnectClient:(id)a0;
- (id)providerPropertiesForProperties:(id)a0 error:(id *)a1;
- (char)removeDevice:(id)a0 error:(id *)a1;
- (char)setProviderProperties:(id)a0 error:(id *)a1;
- (void)powerNotification:(unsigned long long)a0 args:(void *)a1;
- (char)setupPowerStateListener;
- (void)updateRollAngle;
- (void)devicesConnect:(unsigned int)a0;
- (char)setupServerPort;
- (char)clearStaleMatchingDeviceForService:(unsigned int)a0;
- (struct __CFDictionary { } *)createMatchingDictionary;
- (void)deviceConnect:(unsigned int)a0;
- (void)deviceDisconnect:(id)a0;
- (void)displayConfigurationChanges:(unsigned int)a0;
- (void)displayConfigurationChangesSync:(unsigned int)a0;
- (void)handleCGSEvent;
- (id)initWithBundleID:(id)a0 queue:(id)a1;
- (void)postEventOnAllDevices:(id)a0;
- (char)registerCGSNotifications;
- (void)repostPendingTerminationDeviceDiscoveryForUUID:(id)a0;
- (void)resetCGSNotifications;
- (char)setupCGSNotifications;
- (char)setupHIDEventListener;
- (char)setupMatching;
- (void)updateDeviceStateForSessionState:(id)a0;
- (char)waitForSessionActivation;

@end
