@interface FCNewsArticleEmbeddingConfiguration : NSObject

@property (nonatomic) char shouldFetch;
@property (nonatomic) char shouldPersist;

- (id)description;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
