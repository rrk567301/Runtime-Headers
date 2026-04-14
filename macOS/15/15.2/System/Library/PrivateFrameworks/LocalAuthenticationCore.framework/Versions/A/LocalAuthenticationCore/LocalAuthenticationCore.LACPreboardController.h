@class NSString, NSError;

@interface LocalAuthenticationCore.LACPreboardController : NSObject <LACSecureStorageDelegate, LACPreboardControlling> {
    void /* unknown type, empty encoding */ contextProviderFactory;
    void /* unknown type, empty encoding */ launcher;
    void /* unknown type, empty encoding */ passcodeVerifier;
    void /* unknown type, empty encoding */ uppManager;
    void /* unknown type, empty encoding */ useCaseProvider;
    void /* unknown type, empty encoding */ secureStorage;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contextProvider;
    void /* unknown type, empty encoding */ launchResult;
    void /* unknown type, empty encoding */ $__lazy_storage_$_launchDispatchQueue;
}

@property (nonatomic, readonly) BOOL isRequired;
@property (nonatomic, readonly) long long useCase;

- (id)init;
- (void).cxx_destruct;
- (id)acmContextForUUID:(id)a0 error:(id *)a1;
- (id)bundleIDForRequest:(id)a0;
- (void)enableCurrentUseCaseWithPasscode:(NSString *)a0 completion:(void (^)(NSError *))a1;
- (void)launchPreboardWithCompletion:(void (^)(NSError *))a0;
- (BOOL)launchPreboardWithError:(id *)a0;
- (void)terminateWithCompletion:(void (^)(NSError *))a0;
- (id)uppTeamName;

@end
