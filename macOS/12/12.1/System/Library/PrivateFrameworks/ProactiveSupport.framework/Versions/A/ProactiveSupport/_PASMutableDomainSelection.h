@class NSMutableDictionary;

@interface _PASMutableDomainSelection : _PASDomainSelection {
    NSMutableDictionary *_domains;
    unsigned long long _count;
    BOOL _taintedByDeepDomain;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (unsigned long long)count;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (BOOL)addDomain:(id)a0;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (BOOL)containsDomain:(id)a0;
- (id)allDomains;
- (BOOL)isEqualToDomainSelection:(id)a0;
- (BOOL)addDomainsFromSelection:(id)a0;
- (BOOL)addDomainsFromArray:(id)a0;
- (BOOL)addDomainsFromSet:(id)a0;
- (BOOL)_addDomainsFrom:(id)a0;
- (BOOL)_addDomainsFromOtherDictionary:(id)a0 toOwnDictionary:(id)a1 ownDictionaryIsPlaceholder:(BOOL)a2;
- (void)_decrementCountAndMaybePruneItems:(id)a0;

@end
