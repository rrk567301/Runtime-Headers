@interface PKSubcredentialProvisioningPrewarmSessionOperation : PKSubcredentialProvisioningPairingSessionOperation {
    BOOL _operationWasCancelled;
}

- (void)performOperation;
- (void)session:(id)a0 didChangeState:(unsigned long long)a1;
- (void)appletSubcredentialPairingSession:(id)a0 didFinishPreWarmWithResult:(id)a1;
- (BOOL)canCancelOperation;
- (void)cancelOperation;
- (id)_manufacturerIdentifier;
- (void)startPrewarming;

@end
