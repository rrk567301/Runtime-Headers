@class NSData, _CPSpotlightEmbeddingState, NSString;

@interface _CPEmbeddingState : PBCodable <_CPEmbeddingState, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int queryStatus;
@property (nonatomic) BOOL hasQueryEmbedding;
@property (nonatomic) BOOL hasEmbeddingResults;
@property (nonatomic) BOOL hasResults;
@property (retain, nonatomic) _CPSpotlightEmbeddingState *spotlightEmbeddingState;
@property (nonatomic) BOOL hasSuppressedResults;
@property (nonatomic) BOOL hasKeywordResults;
@property (nonatomic) BOOL hasHybridResults;
@property (nonatomic) BOOL hasMetadataResults;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
