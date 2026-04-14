@class NSDictionary;

@interface EMLocalSearchInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int queryStatus;
@property (readonly, nonatomic) BOOL hasQueryEmbedding;
@property (readonly, nonatomic) BOOL hasKeywordResults;
@property (readonly, nonatomic) BOOL hasEmbeddingResults;
@property (readonly, copy, nonatomic) NSDictionary *rankingSignalsByObjectID;

- (id)ef_publicDescription;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithQueryStatus:(int)a0 hasQueryEmbedding:(BOOL)a1 hasKeywordResults:(BOOL)a2 hasEmbeddingResults:(BOOL)a3 rankingSignalsByObjectID:(id)a4;

@end
