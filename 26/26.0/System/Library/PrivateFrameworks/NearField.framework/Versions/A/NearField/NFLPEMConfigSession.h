@interface NFLPEMConfigSession : NFSession

- (BOOL)enableLPEMFeature:(unsigned long long)a0 error:(id *)a1;
- (id)getLPEMBluetoothLogWithError:(id *)a0;
- (unsigned long long)getLPEMFeaturesWithError:(id *)a0;
- (BOOL)disableLPEMFeature:(unsigned long long)a0 error:(id *)a1;
- (id)getAndClearLPEMBluetoothLogWithError:(id *)a0;
- (BOOL)configureHardwareForLPEMWithError:(id *)a0;

@end
