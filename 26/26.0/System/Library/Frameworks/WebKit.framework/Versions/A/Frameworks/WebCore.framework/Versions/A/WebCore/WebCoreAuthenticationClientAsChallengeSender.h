@class NSString;

@interface WebCoreAuthenticationClientAsChallengeSender : NSObject <NSURLAuthenticationChallengeSender> {
    struct WeakPtr<WebCore::AuthenticationClient, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } m_client;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelAuthenticationChallenge:(id)a0;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)a0;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)a0;
- (void)useCredential:(id)a0 forAuthenticationChallenge:(id)a1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)a0;
- (id).cxx_construct;
- (void *)client;
- (void).cxx_destruct;
- (void)detachClient;
- (id)initWithAuthenticationClient:(void *)a0;

@end
