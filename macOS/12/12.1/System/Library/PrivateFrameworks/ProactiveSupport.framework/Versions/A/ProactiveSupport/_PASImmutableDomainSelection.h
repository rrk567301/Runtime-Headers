@class NSSet;

@interface _PASImmutableDomainSelection : _PASDomainSelection {
    NSSet *_domains;
}

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (BOOL)containsDomain:(id)a0;
- (id)allDomains;
- (BOOL)isEqualToDomainSelection:(id)a0;

@end
