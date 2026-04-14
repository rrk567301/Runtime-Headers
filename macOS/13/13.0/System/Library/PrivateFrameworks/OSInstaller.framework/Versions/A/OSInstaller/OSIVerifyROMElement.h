@interface OSIVerifyROMElement : OSIInstallQueueElement {
    unsigned long long _romFeatures;
}

- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;
- (id)errorByReplacingError:(id)a0;
- (BOOL)ignoreIncompatibleROMFeatures;
- (BOOL)ignoreLargeBaseSystemSupportMismatch;
- (id)checkROMFeatures;
- (unsigned long long)unsignedLongLongFromValue:(id)a0;
- (unsigned long long)loadFeaturesFromRegistryEntry:(const char *)a0 property:(id)a1;
- (unsigned long long)loadROMFeatures;
- (BOOL)apfsSupportedByROM;
- (BOOL)largeBaseSystemsSupportedByROM;

@end
