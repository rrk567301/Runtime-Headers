@interface TPSAppleDisplayValidation : TPSTargetingValidation

- (BOOL)_isConnected;
- (BOOL)_checkIfDisplayIsJ327WithVendorID:(unsigned int)a0 modelID:(unsigned int)a1;
- (void)validateWithCompletion:(id /* block */)a0;

@end
