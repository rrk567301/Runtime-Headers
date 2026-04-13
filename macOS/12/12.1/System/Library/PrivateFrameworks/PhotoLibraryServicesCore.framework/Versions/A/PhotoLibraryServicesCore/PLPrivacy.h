@class PLAssetsdPrivacySupportClient, NSObject;
@protocol OS_dispatch_queue;

@interface PLPrivacy : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    long long _authRightFullAccess;
    long long _authRightAddOnly;
    PLAssetsdPrivacySupportClient *_privacySupportClient;
}

@property BOOL hasHandledLimitedLibraryReprompt;
@property (nonatomic, getter=isLimitedLibrarySupported) BOOL limitedLibrarySupported;

+ (id)sharedInstance;
+ (BOOL)_isLimitedLibrarySupportedInClient;
+ (id)_logDictionaryFromPhotosPickerClientLogFile:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (long long)checkPhotosAccessAllowedWithScope:(long long)a0;
- (long long)photosAccessAllowedWithScope:(long long)a0;
- (void)checkPhotosAccessAllowedWithScope:(long long)a0 handler:(id /* block */)a1;
- (void)presentAsyncPromptForLimitedLibraryPickerIfNeeded;
- (void)logPhotosAccessWithSelfAuditToken;
- (long long)photosAccessAllowedWithScope:(long long)a0 auditToken:(struct { unsigned int x0[8]; })a1 clientAuthorization:(id)a2;
- (void)requestLimitedLibraryPromptForApplicationIdentifier:(id)a0;
- (void)logPhotosAccessWithClientAuthorization:(id)a0;
- (void)_resolvePreflightStatusForScope:(long long)a0;
- (void)_setAuthStatus:(long long)a0 scope:(long long)a1;
- (long long)_authStatusForScope:(long long)a0;
- (void)_checkAuthStatusForPhotosAccessScope:(long long)a0 promptIfUnknown:(BOOL)a1 resultHandler:(id /* block */)a2;
- (void)_isPhotosAccessAllowedWithScope:(long long)a0 promptIfUnknown:(BOOL)a1 synchronous:(BOOL)a2 resultHandler:(id /* block */)a3;
- (void)logPhotosAccessWithPhotoPickerClientIdentification:(id)a0;
- (void)logPhotosPickerPresentedLibraryForClient:(id)a0;
- (id)photosPickerPresentedLibraryLogsByClient;
- (id)photosPickerPresentedLibraryLogForClient:(id)a0;

@end
