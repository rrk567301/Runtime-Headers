@class NSError, AISAuthenticationResponse;

@interface AISChildSetupFlowResult : NSObject {
    void /* function */ error;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic, readonly) AISAuthenticationResponse *authResponse;

- (id)init;
- (void).cxx_destruct;

@end
