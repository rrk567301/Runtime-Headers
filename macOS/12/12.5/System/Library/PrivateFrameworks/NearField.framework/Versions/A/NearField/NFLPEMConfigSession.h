@interface NFLPEMConfigSession : NFSession

- (BOOL)configureHardwareForLPEMWithError:(id *)a0;
- (BOOL)disableLPEMFeature:(unsigned long long)a0 error:(id *)a1;
- (BOOL)enableLPEMFeature:(unsigned long long)a0 error:(id *)a1;

@end
