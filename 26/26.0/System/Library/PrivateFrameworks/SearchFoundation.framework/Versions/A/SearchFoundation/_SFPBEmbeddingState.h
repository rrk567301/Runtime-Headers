@class _SFPBSpotlightEmbeddingState, NSData, NSString;

@interface _SFPBEmbeddingState : PBCodable <_SFPBEmbeddingState, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int queryStatus;
@property (nonatomic) BOOL hasQueryEmbedding;
@property (nonatomic) BOOL hasEmbeddingResults;
@property (nonatomic) BOOL hasResults;
@property (retain, nonatomic) _SFPBSpotlightEmbeddingState *spotlightEmbeddingState;
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
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
