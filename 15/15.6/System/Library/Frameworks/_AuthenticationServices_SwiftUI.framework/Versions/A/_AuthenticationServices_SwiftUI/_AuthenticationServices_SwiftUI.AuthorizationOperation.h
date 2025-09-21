@interface _AuthenticationServices_SwiftUI.AuthorizationOperation : NSOperation <ASAuthorizationControllerPresentationContextProviding, ASAuthorizationControllerDelegate> {
    void /* unknown type, empty encoding */ authorizationCompletionHandler;
    void /* unknown type, empty encoding */ presentationAnchorProvider;
    void /* unknown type, empty encoding */ requestContext;
    void /* unknown type, empty encoding */ stateStorage;
    void /* unknown type, empty encoding */ authorizationController;
    void /* unknown type, empty encoding */ presentationContextProvider;
}

@property (nonatomic, readonly) char asynchronous;
@property (nonatomic, readonly) char executing;
@property (nonatomic, readonly) char finished;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (char)isAsynchronous;
- (char)isExecuting;
- (char)isFinished;
- (void)authorizationController:(id)a0 didCompleteWithAuthorization:(id)a1;
- (void)authorizationController:(id)a0 didCompleteWithError:(id)a1;
- (id)presentationAnchorForAuthorizationController:(id)a0;

@end
