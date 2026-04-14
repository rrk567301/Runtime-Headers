@class NSSet;

@interface _PASImmutableDomainSelection : _PASDomainSelection {
    NSSet *_domains;
}

- (BOOL)containsDomain:(id)a0;
- (BOOL)isEmpty;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (BOOL)isEqualToDomainSelection:(id)a0;
- (id)allDomains;
- (void).cxx_destruct;

@end
