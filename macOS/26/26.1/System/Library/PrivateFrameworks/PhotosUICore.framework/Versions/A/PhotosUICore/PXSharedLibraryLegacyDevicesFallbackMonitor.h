@class NSArray;

@interface PXSharedLibraryLegacyDevicesFallbackMonitor : PXObservable

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSArray *devices;

+ (id)legacyDevicesFallbackMonitorIfEnabledWithSharedLibraryOrPreviewPresent:(BOOL)a0;

- (void)setDevices:(id)a0;
- (void)setState:(long long)a0;
- (id)_init;
- (void).cxx_destruct;
- (id)init;
- (void)_updateLegacyDevices:(id)a0 error:(id)a1;

@end
