@class SEMTokenizer;

@interface SEMPhoneticVectorDatabaseWriter : SEMVectorDatabaseWriter {
    SEMTokenizer *_tokenizer;
}

+ (BOOL)_isIndexedFieldType:(unsigned short)a0;
+ (id)vectorizeSharedItem:(id)a0 allMetaContent:(id)a1 sourceIdentifier:(id)a2 embeddingResults:(id)a3 error:(id *)a4;

- (void).cxx_destruct;
- (id)indexName;
- (BOOL)fetchIndexEnableStatusFromTrial;
- (BOOL)isIndexModelVersionCompatible:(id)a0 withEmbeddingServiceModelVersion:(id)a1;
- (void)addIndexFieldWithType:(unsigned short)a0 fieldValue:(id)a1 outIndexTokens:(id)a2;
- (id)initWithVectorDbDirectory:(id)a0 dataProtectionClass:(int)a1 embeddingService:(id)a2 tokenizer:(id)a3 error:(id *)a4;

@end
