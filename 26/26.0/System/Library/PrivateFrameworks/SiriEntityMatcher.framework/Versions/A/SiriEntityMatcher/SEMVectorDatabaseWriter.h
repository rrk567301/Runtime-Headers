@class SEMVectorDatabaseInfo, NSString, NSURL, VSKClient, NSObject, SEMTokenizer;
@protocol SEMEmbeddingService;

@interface SEMVectorDatabaseWriter : NSObject <SEMVectorDatabaseWriteAccess> {
    NSURL *_directoryURL;
    VSKClient *_client;
    NSObject<SEMEmbeddingService> *_embeddingService;
    SEMTokenizer *_tokenizer;
    SEMVectorDatabaseInfo *_info;
    BOOL _inTransaction;
}

@property BOOL isIndexEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)_isIndexedFieldType:(unsigned short)a0;
+ (id)vectorizeSharedItem:(id)a0 allMetaContent:(id)a1 sourceIdentifier:(id)a2 embeddingResults:(id)a3 error:(id *)a4;

- (id)indexName;
- (void).cxx_destruct;
- (BOOL)clearWithError:(id *)a0;
- (BOOL)cleanup:(id *)a0;
- (BOOL)fetchIndexEnableStatusFromTrial;
- (BOOL)isIndexModelVersionCompatible:(id)a0 withEmbeddingServiceModelVersion:(id)a1;
- (BOOL)removeItemWithExternalId:(id)a0 error:(id *)a1;
- (BOOL)addCascadeSharedItemContent:(id)a0 allMetaContent:(id)a1 sourceIdentifier:(id)a2 externalId:(id)a3 error:(id *)a4;
- (void)addIndexFieldWithType:(unsigned short)a0 fieldValue:(id)a1 outIndexTokens:(id)a2;
- (BOOL)commitChanges:(id *)a0;
- (id)embeddingService;
- (id)embeddingServiceModelVersion;
- (long long)indexLocale;
- (id)indexModelVersion;
- (id)initWithVectorDbDirectory:(id)a0 dataProtectionClass:(int)a1 embeddingService:(id)a2 tokenizer:(id)a3 error:(id *)a4;
- (void)refreshIndexEnableStatus:(id *)a0;
- (BOOL)rollbackChanges:(id *)a0;
- (BOOL)setTransactionLocale:(long long)a0 modelVersion:(id)a1 error:(id *)a2;

@end
