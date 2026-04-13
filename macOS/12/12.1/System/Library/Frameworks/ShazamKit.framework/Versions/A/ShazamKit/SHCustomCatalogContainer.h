@class NSArray, SHJSONLCustomCatalogTransformer;
@protocol SHCustomCatalogStorage;

@interface SHCustomCatalogContainer : NSObject

@property (readonly) id<SHCustomCatalogStorage> container;
@property (readonly) SHJSONLCustomCatalogTransformer *transformer;
@property (readonly) NSArray *referenceSignatures;

+ (id)customCatalogURLFromURL:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (BOOL)loadFromURL:(id)a0 error:(id *)a1;
- (id)mediaItemsForReferenceSignature:(id)a0;
- (id)referenceSignatureForTrackID:(unsigned long long)a0;
- (void)addSignature:(id)a0 representingMediaItems:(id)a1;

@end
