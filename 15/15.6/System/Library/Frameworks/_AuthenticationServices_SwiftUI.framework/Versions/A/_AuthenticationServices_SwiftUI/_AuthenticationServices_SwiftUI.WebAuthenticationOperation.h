@interface _AuthenticationServices_SwiftUI.WebAuthenticationOperation : NSOperation {
    void /* unknown type, empty encoding */ authenticationCompletionHandler;
    void /* unknown type, empty encoding */ presentationAnchorProvider;
    void /* unknown type, empty encoding */ requestContext;
    void /* unknown type, empty encoding */ stateStorage;
    void /* unknown type, empty encoding */ authenticationSession;
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

@end
