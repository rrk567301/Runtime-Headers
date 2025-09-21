@interface PXSharedLibraryLegacyDevicesRemoteController : PXObservable

@property (nonatomic) long long state;

+ (id)legacyDevicesRemoteControllerIfEnabledWithSharedLibraryOrPreviewPresent:(char)a0;

- (id)init;
- (id)_init;

@end
