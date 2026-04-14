@class NSString, BMAccessClient;
@protocol BMAccessAssertion;

@interface CCDataResourceReadAccess : NSObject {
    NSString *_useCase;
    BMAccessClient *_accessClient;
    id<BMAccessAssertion> _assertionOverride;
}

+ (id)defaultInstanceWithUseCase:(id)a0;

- (void).cxx_destruct;
- (id)databaseReadAccessForSet:(id)a0 error:(id *)a1;
- (id)_sortedSetsFromProcessEntitlements:(id)a0 filteredBySortedIdentifiers:(id)a1;
- (id)_requestAccessToResource:(id)a0 error:(id *)a1;
- (BOOL)_currentPersonaShouldSkipEnumeratingContainer:(id)a0;
- (BOOL)_currentPersonaShouldSkipEnumeratingResource:(id)a0;
- (id)_requestAccessToSetsDirectoryWithOptions:(unsigned char)a0 error:(id *)a1;
- (BOOL)_resourceIsUserWithPotentialDomainOverrides:(id)a0;
- (BOOL)_shouldSkipEnumeratingResourceForAccessError:(id)a0;
- (BOOL)enumerateReadableSetsWithIdentifiers:(id)a0 descriptors:(id)a1 resourceOptions:(unsigned char)a2 startAfterSet:(id)a3 sorted:(BOOL)a4 error:(id *)a5 usingBlock:(id /* block */)a6;
- (id)initWithAssertionOverride:(id)a0 useCase:(id)a1;

@end
