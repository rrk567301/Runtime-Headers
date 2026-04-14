@class NSArray, SHSignatureChunker, SHCustomCatalog;

@interface SHCustomCatalogTracker : NSObject

@property (readonly) SHSignatureChunker *querySignatureChunker;
@property (readonly) SHCustomCatalog *customCatalog;
@property (readonly) NSArray *querySignatureChunks;

- (void).cxx_destruct;
- (id)initWithQuerySignature:(id)a0 customCatalog:(id)a1;
- (id)trackQuerySignatureChunk:(id)a0 usingReferenceTrackID:(unsigned long long)a1 error:(id *)a2;

@end
