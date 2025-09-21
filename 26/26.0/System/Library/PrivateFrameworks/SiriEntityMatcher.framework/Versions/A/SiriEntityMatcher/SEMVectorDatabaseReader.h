@class NSString, NSURL, VSKClient, NSObject;
@protocol SEMEmbeddingService;

@interface SEMVectorDatabaseReader : NSObject <SEMVectorDatabaseReadAccess> {
    NSURL *_directoryURL;
    VSKClient *_vectorDbClient;
    NSObject<SEMEmbeddingService> *_embeddingService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prewarm;
- (id)modelVersion;
- (BOOL)deactivate;
- (void).cxx_destruct;
- (id)search:(id)a0 error:(id *)a1;
- (BOOL)_checkEligibilityOfSEMVectorSearchResult:(id)a0 forQuery:(id)a1;
- (id)_displayStringFromPhoneticPayload:(id)a0 error:(id *)a1;
- (id)_flattenAndConvertVSNestedResults:(id)a0 query:(id)a1;
- (id)_indexInfo;
- (id)convertVSKResultToSEMResult:(id)a0 query:(id)a1 error:(id *)a2;
- (id)indexLocale;
- (id)initWithVectorDbDirectoryURL:(id)a0 embeddingType:(char)a1;

@end
