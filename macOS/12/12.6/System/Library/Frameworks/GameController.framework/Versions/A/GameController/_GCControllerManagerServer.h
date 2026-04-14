@class NSSet, NSString, NSMutableDictionary, NSMutableSet, NSURL, GCXPCEventPublisher;
@protocol GCDeviceConfigurationRegistry;

@interface _GCControllerManagerServer : _GCControllerManager <GCPhysicalDeviceRegistry, GCLogicalDeviceRegistry, GCDeviceRegistry, GCDeviceConfigurationRegistry> {
    NSMutableDictionary *_allDeviceManagers;
    NSMutableDictionary *_physicalDeviceManagers;
    NSMutableDictionary *_logicalDeviceManagers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _configurationsLock;
    NSMutableSet *_configurations;
    NSMutableDictionary *_allDevices;
    NSMutableDictionary *_physicalDevices;
    NSMutableDictionary *_logicalDevices;
    NSMutableSet *_activeConfigurations;
    NSMutableSet *_hidServices;
    NSMutableDictionary *_hidServiceOwners;
    NSMutableDictionary *_pendingDriverConnections;
    NSMutableDictionary *_pendingFilterConnections;
    NSURL *_lastGeneratedURL;
    GCXPCEventPublisher *_xpcControllersEventPublisher;
}

@property (readonly, copy) NSSet *pidsWithKeyboardAndMouseSupport;
@property (copy) NSSet *activeControllerDevices;
@property (copy) NSSet *pidsWithKeyboardAndMouseSupport;
@property (readonly) id<GCDeviceConfigurationRegistry> deviceConfigurationRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)updateConfiguration:(id)a0;
- (BOOL)removeConfigurationWithIdentifier:(id)a0;
- (id)initWithControllerProfiles:(id)a0;
- (void)_onqueue_signalGameControllerFocusModeEvent;
- (void)_onqueue_unregisterLogicalDevice:(id)a0;
- (void)_onqueue_registerLogicalDevice:(id)a0;
- (void)_onqueue_refreshControllers;
- (void)_onqueue_registerPhysicalDevice:(id)a0;
- (void)_onqueue_refreshLogicalDevices;
- (void)_onqueue_unregisterPhysicalDevice:(id)a0;
- (id)_hidqueue_popPendingDriverConnectionsForRegistryID:(id)a0;
- (id)_hidqueue_popPendingFilterConnectionsForRegistryID:(id)a0;
- (void)deviceManager:(id)a0 deviceDidConnect:(id)a1;
- (void)deviceManager:(id)a0 deviceDidDisconnect:(id)a1;
- (BOOL)hasConfigurationWithIdentifier:(id)a0;
- (id)configurationWithIdentifier:(id)a0;
- (BOOL)addConfiguration:(id)a0 replaceExisting:(BOOL)a1;
- (void)refreshActiveConfigurationsWithCompletion:(id /* block */)a0;
- (void)refreshActiveConfigurations;
- (id)logicalDevices;
- (id)makeHIDEventSource:(struct __IOHIDEventSystemClient { } *)a0;
- (void)onHIDDeviceAdded:(struct __IOHIDServiceClient { } *)a0;
- (void)onHIDDeviceRemoved:(struct __IOHIDServiceClient { } *)a0;
- (void)_hidqueue_pushPendingDriverConnection:(id)a0 forRegistryID:(id)a1;
- (void)_hidqueue_pushPendingFilterConnection:(id)a0 forRegistryID:(id)a1;
- (BOOL)acceptIncomingDriverConnection:(id)a0;
- (void)driverCheckIn;
- (void)setLastGeneratedURL:(id)a0;
- (id)lastGeneratedURL;
- (void)enableKeyboardAndMouseSupportForPID:(id)a0;
- (void)disableKeyboardAndMouseSupportForPID:(id)a0;

@end
