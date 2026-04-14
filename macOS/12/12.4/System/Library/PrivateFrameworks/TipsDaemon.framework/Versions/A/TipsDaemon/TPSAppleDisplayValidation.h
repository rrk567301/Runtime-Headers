@interface TPSAppleDisplayValidation : TPSTargetingValidation

- (BOOL)_isConnected;
- (void)validateWithCompletion:(id /* block */)a0;
- (BOOL)_checkIfDisplayIsJ327WithVendorID:(unsigned int)a0 modelID:(unsigned int)a1;

@end
