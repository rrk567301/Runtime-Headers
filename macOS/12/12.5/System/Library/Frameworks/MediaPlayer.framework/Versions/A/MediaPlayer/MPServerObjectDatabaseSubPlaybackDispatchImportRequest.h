@class MPIdentifierSet;

@interface MPServerObjectDatabaseSubPlaybackDispatchImportRequest : MPServerObjectDatabaseAssetImportRequest {
    MPIdentifierSet *_identifiers;
}

- (void).cxx_destruct;
- (BOOL)performWithDatabaseOperations:(id)a0 error:(id *)a1;
- (id)initWithIdentifiers:(id)a0 playbackResponse:(id)a1;

@end
