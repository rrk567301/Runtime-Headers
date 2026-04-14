@interface TPSAppStoreRegionValidation : TPSRegionsValidation

- (BOOL)hasStoreFrontRegionPrefix:(id)a0 fromRegions:(id)a1;
- (void)validateWithCompletion:(id /* block */)a0;

@end
