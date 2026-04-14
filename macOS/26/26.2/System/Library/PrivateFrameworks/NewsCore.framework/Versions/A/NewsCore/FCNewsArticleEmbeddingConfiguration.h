@interface FCNewsArticleEmbeddingConfiguration : NSObject

@property (nonatomic) BOOL shouldFetch;
@property (nonatomic) BOOL shouldPersist;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)init;

@end
