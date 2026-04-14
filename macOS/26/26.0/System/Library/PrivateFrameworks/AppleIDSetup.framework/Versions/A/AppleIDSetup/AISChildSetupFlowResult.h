@class NSError, AISAuthenticationResponse;

@interface AISChildSetupFlowResult : NSObject

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) AISAuthenticationResponse *authResponse;

- (id)init;
- (void).cxx_destruct;

@end
