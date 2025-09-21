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
- (id)_requestAccessToResource:(id)a0 error:(id *)a1;
- (id)_sortedSetsFromProcessEntitlements:(id)a0 filteredBySortedIdentifiers:(id)a1;
- (BOOL)_isDefaultPersonaRequestingUserResource:(id)a0;
- (id)_requestAccessToSetsDirectoryWithOptions:(unsigned char)a0 error:(id *)a1;
- (BOOL)_shouldEnumerateContainer:(id)a0;
- (BOOL)enumerateReadableSets:(id *)a0 resourceOptions:(unsigned char)a1 setIdentifiers:(id)a2 descriptors:(id)a3 startAfterSet:(id)a4 sorted:(BOOL)a5 usingBlock:(id /* block */)a6;
- (id)initWithAssertionOverride:(id)a0 useCase:(id)a1;

@end
