@interface TPSAppleDisplayValidation : TPSTargetingValidation

- (BOOL)_isConnected;
- (BOOL)_checkIfDisplayIsStudioDisplayWithVendorID:(unsigned int)a0 modelID:(unsigned int)a1;
- (void)validateWithCompletion:(id /* block */)a0;

@end
