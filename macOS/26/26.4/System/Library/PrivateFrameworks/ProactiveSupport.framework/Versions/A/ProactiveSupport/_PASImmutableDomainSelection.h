@class NSSet;

@interface _PASImmutableDomainSelection : _PASDomainSelection {
    NSSet *_domains;
}

- (BOOL)isEmpty;
- (BOOL)isEqualToDomainSelection:(id)a0;
- (void).cxx_destruct;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (BOOL)containsDomain:(id)a0;
- (id)allDomains;

@end
