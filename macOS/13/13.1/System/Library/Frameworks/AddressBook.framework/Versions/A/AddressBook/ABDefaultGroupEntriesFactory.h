@interface ABDefaultGroupEntriesFactory : ABAbstractGroupEntriesFactory

@property BOOL includeLastImport;

- (id)makeGroupEntries;
- (id)makeGroupEntriesWithHidingPolicy:(id)a0;

@end
