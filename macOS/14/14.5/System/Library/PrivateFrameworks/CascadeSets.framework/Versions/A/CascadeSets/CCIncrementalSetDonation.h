@interface CCIncrementalSetDonation : CCSetDonation

- (BOOL)addOrUpdateItem:(id)a0 error:(id *)a1;
- (unsigned long long)priorVersion;
- (BOOL)removeItemWithSourceItemIdentifier:(id)a0 error:(id *)a1;

@end
