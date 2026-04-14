@interface SKGEmbeddingVersionManager : NSObject

+ (id)currentEmbeddingVersion;
+ (id)currentEmbeddingVersionDataReturningError:(id *)a0;
+ (id)embeddingVersionDataFromTextVersion:(id)a0 returningError:(id *)a1;
+ (BOOL)embeddingsSupported;

@end
