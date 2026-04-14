@class NSArray;

@interface PXSharedLibraryLegacyDevicesMonitor : PXObservable

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSArray *devices;

+ (id)legacyDevicesMonitorIfEnabledWithSharedLibraryOrPreviewPresent:(BOOL)a0;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)setDevices:(id)a0;
- (void)_updateLegacyDevices:(id)a0 error:(id)a1;

@end
