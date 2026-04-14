@class AVOutputDeviceDiscoverySessionAvailableOutputDevices, AVOutputDeviceDiscoverySession;

@interface AVOutputDeviceDiscoverySessionController : NSObject {
    AVOutputDeviceDiscoverySession *_outputDeviceDiscoverySession;
    AVOutputDeviceDiscoverySessionAvailableOutputDevices *_cachedAvailableOutputDevices;
    BOOL _cachedExternalOutputDeviceAvailable;
    long long _startDetailedDiscoveryCount;
}

@property (readonly, getter=isExternalOutputDeviceAvailable) BOOL externalOutputDeviceAvailable;
@property (readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevices;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDeviceFeatures:(unsigned long long)a0;
- (void)_availableOutputDevicesChangedNotification:(id)a0;
- (void)_updateCachedAvailableOutputDevices;
- (void)_updateCachedExternalOutputDeviceAvailable;
- (void)startDetailedDiscovery;
- (void)stopDetailedDiscovery;

@end
