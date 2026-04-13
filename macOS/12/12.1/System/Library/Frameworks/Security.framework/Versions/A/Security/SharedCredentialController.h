@class ASAuthorizationPasswordProvider, NSString, ASAuthorizationController, ASPasswordCredential, NSError, NSObject;
@protocol OS_dispatch_semaphore;

@interface SharedCredentialController : NSObject <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding> {
    ASAuthorizationPasswordProvider *_provider;
    ASAuthorizationController *_controller;
    ASPasswordCredential *_passwordCredential;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSError *_error;
    int _result;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)error;
- (int)result;
- (id)presentationAnchorForAuthorizationController:(id)a0;
- (void)authorizationController:(id)a0 didCompleteWithAuthorization:(id)a1;
- (void)authorizationController:(id)a0 didCompleteWithError:(id)a1;
- (void)_requestCredential;
- (id)passwordCredential;

@end
