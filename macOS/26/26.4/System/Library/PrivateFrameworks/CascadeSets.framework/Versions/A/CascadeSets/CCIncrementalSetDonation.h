@interface CCIncrementalSetDonation : CCSetDonation

- (BOOL)addOrUpdateItem:(id)a0 cacheContent:(id)a1 error:(id *)a2;
- (BOOL)addOrUpdateItem:(id)a0 error:(id *)a1;
- (void)designateAsFullSet;
- (BOOL)removeItemWithSourceItemIdentifier:(id)a0 error:(id *)a1;
- (BOOL)removeItemsMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)isAwaitingFullSet;

@end
