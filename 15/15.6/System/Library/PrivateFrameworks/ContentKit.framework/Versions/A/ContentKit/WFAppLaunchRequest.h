@interface WFAppLaunchRequest : INCAppLaunchRequest

@property (nonatomic) char requiresUserFacingApp;

- (void)performWithCompletionHandler:(id /* block */)a0;
- (char)isRequestForUserFacingApp;
- (id)readableErrorFromError:(id)a0;
- (id)rootCauseErrorFromError:(id)a0;

@end
