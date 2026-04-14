@class NSArray, NSMutableArray, NSMutableDictionary;

@interface SHCustomCatalogMemoryStorage : NSObject <SHCustomCatalogStorage>

@property (retain) NSMutableArray *signatureIDs;
@property (retain) NSMutableDictionary *signatures;
@property (retain) NSMutableDictionary *mediaItems;
@property (readonly) NSArray *referenceSignatures;

- (void).cxx_destruct;
- (id)init;
- (void)addSignature:(id)a0 representingMediaItems:(id)a1;
- (id)mediaItemsForReferenceSignature:(id)a0;
- (void)producedMediaItem:(id)a0 forID:(id)a1;
- (void)producedSignature:(id)a0 forID:(id)a1;
- (id)referenceSignatureForID:(id)a0;
- (id)referenceSignatureForTrackID:(unsigned long long)a0;
- (BOOL)removeSignatureWithID:(id)a0 error:(id *)a1;
- (BOOL)signatureExistsForIdentifier:(id)a0;

@end
