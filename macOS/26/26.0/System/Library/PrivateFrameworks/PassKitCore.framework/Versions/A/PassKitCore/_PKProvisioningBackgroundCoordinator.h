@interface _PKProvisioningBackgroundCoordinator : NSObject {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ previouslyAcceptedTerms;
    void /* unknown type, empty encoding */ reporter;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ preflightCompletion;
    void /* function */ onRecoverableCheckpointReached;
    void /* unknown type, empty encoding */ composer;
    void /* unknown type, empty encoding */ fieldsModel;
    void /* unknown type, empty encoding */ provisionedPasses;
    void /* unknown type, empty encoding */ passcodeAssertion;
}

@property (nonatomic, copy) id /* block */ onRecoverableCheckpointReached;

- (void)dealloc;
- (void)invalidate;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)archivedState;
- (void)startWithCompletion:(id /* block */)a0;
- (void)cleanUpArchivedProvisioningAndInvalidateWithCompletion:(id /* block */)a0;
- (id)initWithPkContext:(id)a0 credential:(id)a1 previouslyAcceptedTerms:(BOOL)a2;

@end
