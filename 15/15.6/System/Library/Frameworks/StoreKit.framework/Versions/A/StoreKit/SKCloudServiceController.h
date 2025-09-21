@class ICCloudServiceStatusMonitor;

@interface SKCloudServiceController : NSObject {
    char _allowsPromptingForPrivacyAcknowledgement;
    ICCloudServiceStatusMonitor *_cloudServiceStatusMonitor;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic, setter=_setAllowsPromptingForPrivacyAcknowledgement:) char _allowsPromptingForPrivacyAcknowledgement;

+ (long long)authorizationStatus;
+ (void)requestAuthorization:(id /* block */)a0;
+ (id)_publicErrorForPrivateError:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)requestCapabilitiesWithCompletionHandler:(id /* block */)a0;
- (void)requestStorefrontCountryCodeWithCompletionHandler:(id /* block */)a0;
- (void)requestStorefrontIdentifierWithCompletionHandler:(id /* block */)a0;
- (void)requestUserTokenForDeveloperToken:(id)a0 completionHandler:(id /* block */)a1;
- (id)_cloudServiceStatusMonitorWithError:(id *)a0;
- (void)_handleCapabilitiesDidChangeNotification:(id)a0;
- (void)_handleStorefrontCountryCodeDidChangeNotification:(id)a0;
- (void)_handleStorefrontIdentifierDidChangeNotification:(id)a0;
- (void)requestPersonalizationTokenForClientToken:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
