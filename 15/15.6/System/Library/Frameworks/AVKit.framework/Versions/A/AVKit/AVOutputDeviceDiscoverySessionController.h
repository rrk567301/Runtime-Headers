@class AVOutputDeviceDiscoverySessionAvailableOutputDevices, AVOutputDeviceDiscoverySession;

@interface AVOutputDeviceDiscoverySessionController : NSObject {
    AVOutputDeviceDiscoverySession *_outputDeviceDiscoverySession;
    AVOutputDeviceDiscoverySessionAvailableOutputDevices *_cachedAvailableOutputDevices;
    char _cachedExternalOutputDeviceAvailable;
    long long _startDetailedDiscoveryCount;
}

@property (readonly, getter=isExternalOutputDeviceAvailable) char externalOutputDeviceAvailable;
@property (readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevices;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDeviceFeatures:(unsigned long long)a0;
- (void)_availableOutputDevicesChangedNotification:(id)a0;
- (void)_updateCachedAvailableOutputDevices;
- (void)_updateCachedExternalOutputDeviceAvailable;
- (void)startDetailedDiscovery;
- (void)stopDetailedDiscovery;

@end
