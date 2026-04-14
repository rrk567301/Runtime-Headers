@class NSError, AISAuthenticationResponse;

@interface AISChildSetupFlowResult : NSObject {
    void /* function */ error;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic, readonly) AISAuthenticationResponse *authResponse;

- (void).cxx_destruct;
- (id)init;

@end
