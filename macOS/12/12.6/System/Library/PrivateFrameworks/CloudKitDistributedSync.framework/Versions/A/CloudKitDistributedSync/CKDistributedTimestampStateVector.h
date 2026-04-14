@interface CKDistributedTimestampStateVector : CKDistributedTimestampClockVector

- (BOOL)hasAtomStateNotInStateVector:(id)a0;
- (id)clockVector;
- (void)minusStateVector:(id)a0;
- (void)unionStateVector:(id)a0;
- (void)intersectStateVector:(id)a0;
- (void)enumerateClockValuesForSiteIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (void)unionVector:(id)a0;
- (id)descriptionWithStringSiteIdentifiers:(BOOL)a0;
- (void)enumerateAllClockValuesUsingBlock:(id /* block */)a0;
- (unsigned char)vectorExpansionState;
- (void)addClockValuesInIndexSet:(id)a0 withClockType:(unsigned char)a1 forSiteIdentifier:(id)a2;
- (void)addClockValuesInIndexSet:(id)a0 withClockType:(unsigned char)a1 atomState:(unsigned char)a2 forSiteIdentifier:(id)a3;
- (id)vectorFilteredByAtomState:(unsigned char)a0;
- (void)addClockValuesInIndexSet:(id)a0 withAtomState:(unsigned char)a1 forSiteIdentifier:(id)a2;

@end
