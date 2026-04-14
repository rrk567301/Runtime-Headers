@class _GCNintendoJoyConDeviceManager, NSString, _GCDeviceConfiguration, NSSet, _GCNintendoFusedJoyConDevice, GCDeviceBattery, _GCCControllerHIDServiceInfo, NSMapTable;
@protocol _GCDeviceDriverConnection, NSSecureCoding, _GCGamepadEventSourceDescription, GCBatteryServiceServerInterface, NSCopying, NSObject;

@interface _GCNintendoJoyConDevice : NSObject <_GCDeviceControllerProviding, _GCDeviceGamepadComponent, _GCDevicePlayerIndexIndicatorComponent, _GCDeviceBatteryComponent, GCNintendoJoyConFusionGestureServiceClientInterface, GCPlayerIndicatorXPCProxyServerEndpointDelegate, GCBatteryXPCProxyServerEndpointDelegate, _GCPhysicalDevice, _GCLogicalDevice> {
    _GCCControllerHIDServiceInfo *_serviceInfo;
    id<_GCDeviceDriverConnection> _driverConnection;
    id _driverConnectionInvalidationRegistration;
    NSMapTable *_clients;
    long long _indicatedPlayerIndex;
    NSMapTable *_clientPlayerIndicatorEndpoints;
    id /* block */ _batteryComponentBatteryUpdatedHandler;
    id<GCBatteryServiceServerInterface> _batteryServiceServer;
    GCDeviceBattery *_battery;
    NSMapTable *_clientBatteryEndpoints;
}

@property (readonly) id<_GCGamepadEventSourceDescription> gamepadEventSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property long long indicatedPlayerIndex;
@property (copy, nonatomic) id /* block */ deviceBatteryServiceConnectedHandler;
@property (copy, nonatomic) id /* block */ deviceBatteryComponentBatteryUpdatedHandler;
@property (readonly, nonatomic) GCDeviceBattery *battery;
@property (readonly, nonatomic) unsigned char type;
@property (nonatomic) unsigned char inputMode;
@property (retain, nonatomic) _GCDeviceConfiguration *configuration;
@property (weak, nonatomic) _GCNintendoFusedJoyConDevice *fusionDevice;
@property (readonly, copy) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly, weak) _GCNintendoJoyConDeviceManager *manager;
@property (readonly) NSSet *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSSet *underlyingDevices;

- (id)init;
- (id)propertyForKey:(id)a0;
- (void).cxx_destruct;
- (id)makeControllerForClient:(id)a0;
- (void)activateLogical;
- (id)initWithHIDDevice:(id)a0 manager:(id)a1;
- (void)setDriverConnection:(id)a0;
- (id)readBattery;
- (void)propagateBattery:(id)a0;
- (void)playerIndicatorXPCProxyServerEndpoint:(id)a0 didReceivePlayerIndexChange:(long long)a1;
- (void)_removeClient:(id)a0;
- (void)_addClient:(id)a0;
- (void)homeButtonLongPressGesture:(BOOL)a0;
- (void)updateBattery:(unsigned char)a0 isCharging:(BOOL)a1;

@end
