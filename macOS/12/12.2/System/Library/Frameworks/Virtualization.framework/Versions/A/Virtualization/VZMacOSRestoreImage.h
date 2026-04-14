@class NSArray, NSString, NSURL, VZMacOSConfigurationRequirements, NSDictionary;

@interface VZMacOSRestoreImage : NSObject {
    struct shared_ptr<VzInstallation::InstallerMessenger> { struct InstallerMessenger *__ptr_; struct __shared_weak_count *__cntrl_; } _messenger;
    NSArray *_configurations;
    struct optional<std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>> { union { char __null_state_; struct tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long> { struct __tuple_impl<std::__tuple_indices<0, 1, 2, 3, 4>, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long> { unsigned long long __value_; unsigned long long __value_; unsigned long long __value_; unsigned long long __value_; unsigned long long __value_; } __base_; } __val_; } ; BOOL __engaged_; } _hostMobileDeviceVersion;
    NSDictionary *_restoreOptions;
}

@property (readonly, copy) NSArray *_configurations;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSString *buildVersion;
@property (readonly) struct { long long majorVersion; long long minorVersion; long long patchVersion; } operatingSystemVersion;
@property (readonly, copy) VZMacOSConfigurationRequirements *mostFeaturefulSupportedConfiguration;

+ (void)loadFileURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)fetchLatestSupportedWithCompletionHandler:(id /* block */)a0;
+ (void)_loadCatalogWithCompletionHandler:(id /* block */)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
