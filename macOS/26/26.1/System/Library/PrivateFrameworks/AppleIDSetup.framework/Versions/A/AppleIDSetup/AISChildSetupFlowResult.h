@class NSError, AISAuthenticationResponse;

@interface AISChildSetupFlowResult : NSObject

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) AISAuthenticationResponse *authResponse;

- (void).cxx_destruct;
- (id)init;

@end
