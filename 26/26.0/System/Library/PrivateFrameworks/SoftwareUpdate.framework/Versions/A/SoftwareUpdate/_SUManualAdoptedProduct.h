@interface _SUManualAdoptedProduct : SUProduct

- (unsigned long long)downloadSize;
- (void)_ensureDistributionBaseURLIsSet;
- (id)packageReferenceForPackageIdentifier:(id)a0;

@end
