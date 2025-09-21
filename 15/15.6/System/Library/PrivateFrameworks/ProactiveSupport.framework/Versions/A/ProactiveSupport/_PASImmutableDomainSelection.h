@class NSSet;

@interface _PASImmutableDomainSelection : _PASDomainSelection {
    NSSet *_domains;
}

- (void).cxx_destruct;
- (char)isEmpty;
- (char)containsDomain:(id)a0;
- (id)allDomains;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (char)isEqualToDomainSelection:(id)a0;

@end
