@class NSString, GCDeviceBattery, _GCNintendoJoyConDevice, _GCDeviceConfiguration, NSSet, NSMapTable;
@protocol NSSecureCoding, _GCGamepadEventSourceDescription, _GCDeviceManager, NSCopying, NSObject;

@interface _GCNintendoFusedJoyConDevice : NSObject <_GCDeviceControllerProviding, _GCDeviceGamepadComponent, _GCDevicePlayerIndexIndicatorComponent, _GCDeviceBatteryComponent, GCPlayerIndicatorXPCProxyServerEndpointDelegate, GCBatteryXPCProxyServerEndpointDelegate, _GCLogicalDevice> {
    NSMapTable *_clients;
    long long _indicatedPlayerIndex;
    NSMapTable *_clientPlayerIndicatorEndpoints;
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
@property (retain, nonatomic) _GCDeviceConfiguration *configuration;
@property (readonly, nonatomic) _GCNintendoJoyConDevice *leftDevice;
@property (readonly, nonatomic) _GCNintendoJoyConDevice *rightDevice;
@property (readonly) NSSet *underlyingDevices;
@property (readonly, copy) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly, weak) id<_GCDeviceManager> manager;
@property (readonly) NSSet *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifierForFusedJoyConDeviceWithLeftDevice:(id)a0 rightDevice:(id)a1;

- (id)init;
- (id)propertyForKey:(id)a0;
- (void).cxx_destruct;
- (void)deactivate;
- (id)makeControllerForClient:(id)a0;
- (void)activateLogical;
- (id)initWithLeft:(id)a0 right:(id)a1 manager:(id)a2;
- (void)playerIndicatorXPCProxyServerEndpoint:(id)a0 didReceivePlayerIndexChange:(long long)a1;
- (void)_removeClient:(id)a0;
- (void)_addClient:(id)a0;
- (void)_refreshBattery;
- (void)_propagateBattery;

@end
