@interface PKSubcredentialProvisioningPrewarmSessionOperation : PKSubcredentialProvisioningPairingSessionOperation {
    BOOL _operationWasCancelled;
}

- (void)performOperation;
- (void)cancelOperation;
- (void)startPrewarming;
- (id)_manufacturerIdentifier;
- (void)appletSubcredentialPairingSession:(id)a0 didFinishPreWarmWithResult:(id)a1;
- (BOOL)canCancelOperation;
- (void)session:(id)a0 didChangeState:(unsigned long long)a1;

@end
