@class NSMutableDictionary;

@interface _PASMutableDomainSelection : _PASDomainSelection {
    NSMutableDictionary *_domains;
    unsigned long long _count;
    char _taintedByDeepDomain;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (char)isEmpty;
- (unsigned long long)count;
- (char)containsDomain:(id)a0;
- (char)addDomainsFromSet:(id)a0;
- (id)allDomains;
- (char)addDomain:(id)a0;
- (char)_addDomainsFromOtherDictionary:(id)a0 toOwnDictionary:(id)a1 ownDictionaryIsPlaceholder:(char)a2;
- (char)_addDomainsFrom:(id)a0;
- (void)_decrementCountAndMaybePruneItems:(id)a0;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (char)addDomainsFromArray:(id)a0;
- (char)addDomainsFromSelection:(id)a0;
- (char)isEqualToDomainSelection:(id)a0;

@end
