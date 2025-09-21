@interface NFLPEMConfigSession : NFSession

- (char)configureHardwareForLPEMWithError:(id *)a0;
- (char)disableLPEMFeature:(unsigned long long)a0 error:(id *)a1;
- (char)enableLPEMFeature:(unsigned long long)a0 error:(id *)a1;
- (id)getAndClearLPEMBluetoothLogWithError:(id *)a0;
- (id)getLPEMBluetoothLogWithError:(id *)a0;
- (unsigned long long)getLPEMFeaturesWithError:(id *)a0;

@end
