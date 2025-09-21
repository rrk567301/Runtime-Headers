@interface CCIncrementalSetDonation : CCSetDonation

- (BOOL)addOrUpdateItem:(id)a0 error:(id *)a1;
- (void)designateAsFullSet;
- (BOOL)isAwaitingFullSet;
- (BOOL)removeItemWithSourceItemIdentifier:(id)a0 error:(id *)a1;

@end
