@class NSArray;

@interface PXSharedLibraryLegacyDevicesFallbackMonitor : PXObservable

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSArray *devices;

+ (id)legacyDevicesFallbackMonitorIfEnabledWithSharedLibraryOrPreviewPresent:(BOOL)a0;

- (id)_init;
- (void)setDevices:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setState:(long long)a0;
- (void)_updateLegacyDevices:(id)a0 error:(id)a1;

@end
