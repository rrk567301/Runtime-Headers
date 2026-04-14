@interface OSIVerifyROMElement : OSIInstallQueueElement {
    unsigned long long _romFeatures;
}

- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;
- (unsigned long long)loadROMFeatures;
- (id)checkROMFeatures;
- (id)errorByReplacingError:(id)a0;
- (BOOL)ignoreIncompatibleROMFeatures;
- (BOOL)apfsSupportedByROM;
- (BOOL)largeBaseSystemsSupportedByROM;
- (BOOL)ignoreLargeBaseSystemSupportMismatch;
- (unsigned long long)unsignedLongLongFromValue:(id)a0;
- (unsigned long long)loadFeaturesFromRegistryEntry:(const char *)a0 property:(id)a1;

@end
