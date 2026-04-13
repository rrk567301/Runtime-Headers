@interface ASAuthorizationRemoteViewController : NSRemoteViewController <AuthenticationServicesHelperProtocol>

+ (id)serviceViewControllerInterface;

- (void)beginAuthorizationOnEndpoint:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
