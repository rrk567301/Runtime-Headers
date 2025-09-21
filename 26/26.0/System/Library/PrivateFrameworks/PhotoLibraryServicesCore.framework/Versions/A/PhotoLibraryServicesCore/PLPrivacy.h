@class PLAssetsdPrivacySupportClient, NSObject;
@protocol OS_dispatch_queue;

@interface PLPrivacy : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedClientAuthLock;
    long long _cachedClientAuthRightFullAccess;
    long long _cachedClientAuthRightAddOnly;
    PLAssetsdPrivacySupportClient *_privacySupportClient;
}

@property BOOL hasHandledLimitedLibraryReprompt;
@property (nonatomic, getter=isLimitedLibrarySupported) BOOL limitedLibrarySupported;

+ (id)sharedInstance;
+ (id)_logDictionaryFromPhotosPickerClientLogFile:(id)a0;

- (void)logPhotosAccessWithPhotoPickerClientIdentification:(id)a0;
- (void)_setAuthStatus:(long long)a0 scope:(long long)a1;
- (long long)photosAccessAllowedWithScope:(long long)a0 auditToken:(struct { unsigned int x0[8]; })a1 clientAuthorization:(id)a2;
- (void)logPhotosPickerPresentedLibraryForClient:(id)a0 usingOptions:(long long)a1;
- (long long)checkPhotosAccessAllowedWithScope:(long long)a0;
- (void)requestLimitedLibraryPromptForApplicationIdentifier:(id)a0;
- (void)_checkAuthStatusForPhotosAccessScope:(long long)a0 preflightStatus:(long long)a1 promptIfUnknown:(BOOL)a2 resultHandler:(id /* block */)a3;
- (id)init;
- (void)logPhotosAccessWithClientAuthorization:(id)a0;
- (void)_isPhotosAccessAllowedWithScope:(long long)a0 promptIfUnknown:(BOOL)a1 synchronous:(BOOL)a2 resultHandler:(id /* block */)a3;
- (void)checkPhotosAccessAllowedWithScope:(long long)a0 handler:(id /* block */)a1;
- (id)photosPickerPresentedLibraryLogForClient:(id)a0;
- (id)photosPickerPresentedLibraryLogsByClient;
- (void)presentAsyncPromptForLimitedLibraryPickerIfNeeded;
- (long long)_resolvePreflightStatusForScope:(long long)a0;
- (long long)photosAccessAllowedWithScope:(long long)a0;
- (long long)_authStatusForScope:(long long)a0;
- (void)reportPhotosUseWithClientAuthorization:(id)a0;
- (void)logPhotosAccessWithSelfAuditToken;
- (void).cxx_destruct;

@end
