@class NSMutableDictionary;

@interface _PASMutableDomainSelection : _PASDomainSelection {
    NSMutableDictionary *_domains;
    unsigned long long _count;
    BOOL _taintedByDeepDomain;
}

- (BOOL)addDomain:(id)a0;
- (id)allDomains;
- (unsigned long long)count;
- (BOOL)containsDomain:(id)a0;
- (BOOL)_addDomainsFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)addDomainsFromSet:(id)a0;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (void)_decrementCountAndMaybePruneItems:(id)a0;
- (void).cxx_destruct;
- (BOOL)addDomainsFromSelection:(id)a0;
- (BOOL)isEqualToDomainSelection:(id)a0;
- (BOOL)isEmpty;
- (BOOL)_addDomainsFromOtherDictionary:(id)a0 toOwnDictionary:(id)a1 ownDictionaryIsPlaceholder:(BOOL)a2;
- (id)init;
- (BOOL)addDomainsFromArray:(id)a0;
- (void)dealloc;

@end
