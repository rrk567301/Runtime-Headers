@class NSArray, AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal;

@interface AVOutputDeviceDiscoverySessionAvailableOutputDevices : NSObject {
    AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal *_availableOutputDevices;
}

@property (readonly, nonatomic) NSArray *recentlyUsedDevices;
@property (readonly, nonatomic) NSArray *otherDevices;

+ (id)outputDeviceDiscoverySessionAvailableOutputDevicesWithAvailableFigEndpoints:(id)a0;

- (id)impl;
- (void)_loadOutputDevices;
- (id)init;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithOutputDeviceDiscoverySessionAvailableOutputDevicesImpl:(id)a0;

@end
