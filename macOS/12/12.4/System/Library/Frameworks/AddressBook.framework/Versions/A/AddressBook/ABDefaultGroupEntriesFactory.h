@interface ABDefaultGroupEntriesFactory : ABAbstractGroupEntriesFactory

@property BOOL includeLastImport;

- (id)makeGroupEntriesWithHidingPolicy:(id)a0;
- (id)makeGroupEntries;

@end
