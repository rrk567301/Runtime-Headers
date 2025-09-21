@interface OSIVerifyROMElement : OSIInstallQueueElement {
    unsigned long long _romFeatures;
}

- (id)operationName;
- (char)runReturningError:(id *)a0;
- (unsigned long long)loadROMFeatures;
- (char)apfsSupportedByROM;
- (id)checkROMFeatures;
- (id)errorByReplacingError:(id)a0;
- (double)estimatedTimeToComplete;
- (char)ignoreIncompatibleROMFeatures;
- (char)ignoreLargeBaseSystemSupportMismatch;
- (char)largeBaseSystemsSupportedByROM;
- (unsigned long long)loadFeaturesFromRegistryEntry:(const char *)a0 property:(id)a1;
- (unsigned long long)unsignedLongLongFromValue:(id)a0;

@end
