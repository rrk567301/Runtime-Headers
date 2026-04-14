@class NSString, NSDictionary, NSData, SFSpotlightEmbeddingState;

@interface SFEmbeddingState : NSObject <SFEmbeddingState, NSSecureCoding, NSCopying> {
    struct { unsigned char queryStatus : 1; unsigned char hasQueryEmbedding : 1; unsigned char hasEmbeddingResults : 1; unsigned char hasResults : 1; unsigned char hasSuppressedResults : 1; unsigned char hasKeywordResults : 1; unsigned char hasHybridResults : 1; unsigned char hasMetadataResults : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int queryStatus;
@property (nonatomic) BOOL hasQueryEmbedding;
@property (nonatomic) BOOL hasEmbeddingResults;
@property (nonatomic) BOOL hasResults;
@property (retain, nonatomic) SFSpotlightEmbeddingState *spotlightEmbeddingState;
@property (nonatomic) BOOL hasSuppressedResults;
@property (nonatomic) BOOL hasKeywordResults;
@property (nonatomic) BOOL hasHybridResults;
@property (nonatomic) BOOL hasMetadataResults;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasHasEmbeddingResults;
- (BOOL)hasHasHybridResults;
- (BOOL)hasHasKeywordResults;
- (BOOL)hasHasMetadataResults;
- (BOOL)hasHasQueryEmbedding;
- (BOOL)hasHasResults;
- (BOOL)hasHasSuppressedResults;
- (BOOL)hasQueryStatus;

@end
