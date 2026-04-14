@class NSSet;

@interface _PASImmutableDomainSelection : _PASDomainSelection {
    NSSet *_domains;
}

- (BOOL)isEmpty;
- (id)allDomains;
- (BOOL)containsDomain:(id)a0;
- (void).cxx_destruct;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (BOOL)isEqualToDomainSelection:(id)a0;

@end
