@class NSObject;
@protocol SEMVectorDatabaseAccessProvider;

@interface SEMVectorSearcher : NSObject {
    NSObject<SEMVectorDatabaseAccessProvider> *_vectorDbProvider;
    char _embeddingType;
}

+ (id)phoneticSearcher;

- (void).cxx_destruct;
- (id)search:(id)a0 error:(id *)a1;
- (id)indexLocale:(id *)a0;
- (BOOL)_isUserVaultEnabled;
- (BOOL)_searchWithQuery:(id)a0 indexSiteType:(unsigned char)a1 addToResults:(id)a2 error:(id *)a3;
- (id)initWithVectorDbAccessProvider:(id)a0 embeddingType:(char)a1;
- (id)modelVersion:(id *)a0;

@end
