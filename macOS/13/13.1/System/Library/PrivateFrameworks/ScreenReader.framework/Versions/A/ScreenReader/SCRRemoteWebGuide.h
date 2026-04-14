@interface SCRRemoteWebGuide : SCRRemoteGuide

- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (void)handleTypeAheadWithKey:(id)a0 request:(id)a1;
- (BOOL)isLoadingItems;
- (id)supportedSearchKeyRotorMapping;
- (unsigned long long)_headingLevelForTypeAheadCharacters:(id)a0;
- (id)_searchKeysForHeadingLevel:(unsigned long long)a0;
- (id)_titleForHeadingLevel:(unsigned long long)a0;
- (void)_updateSearchKeysWithHeadingLevel:(unsigned long long)a0;

@end
