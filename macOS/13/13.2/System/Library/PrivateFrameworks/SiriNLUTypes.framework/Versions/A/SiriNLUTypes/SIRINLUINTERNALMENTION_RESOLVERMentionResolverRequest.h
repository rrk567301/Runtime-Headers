@class NSString, SIRINLUINTERNALTokenChain, SIRINLUEXTERNALUUID, SIRINLUINTERNALNLv4EmbeddingTensor, NSMutableArray, SIRINLUEXTERNALRequestID;

@interface SIRINLUINTERNALMENTION_RESOLVERMentionResolverRequest : PBRequest <NSCopying> {
    struct { unsigned char maxCandidates : 1; unsigned char turnIndex : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (readonly, nonatomic) BOOL hasNluRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *nluRequestId;
@property (readonly, nonatomic) BOOL hasResultCandidateId;
@property (retain, nonatomic) NSString *resultCandidateId;
@property (readonly, nonatomic) BOOL hasUtterance;
@property (retain, nonatomic) NSString *utterance;
@property (readonly, nonatomic) BOOL hasTokenChain;
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain;
@property (readonly, nonatomic) BOOL hasEmbeddingTensor;
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddingTensor;
@property (retain, nonatomic) NSMutableArray *entityCandidates;
@property (retain, nonatomic) NSMutableArray *detectedMentions;
@property (nonatomic) BOOL hasMaxCandidates;
@property (nonatomic) unsigned long long maxCandidates;
@property (retain, nonatomic) NSMutableArray *matchingSpans;
@property (nonatomic) BOOL hasTurnIndex;
@property (nonatomic) unsigned long long turnIndex;
@property (readonly, nonatomic) BOOL hasCdmRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *cdmRequestId;
@property (retain, nonatomic) NSMutableArray *contextualSpans;

+ (Class)matchingSpansType;
+ (Class)entityCandidatesType;
+ (Class)detectedMentionsType;
+ (Class)contextualSpansType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearMatchingSpans;
- (void)addMatchingSpans:(id)a0;
- (unsigned long long)matchingSpansCount;
- (id)matchingSpansAtIndex:(unsigned long long)a0;
- (void)clearContextualSpans;
- (void)addContextualSpans:(id)a0;
- (unsigned long long)contextualSpansCount;
- (id)contextualSpansAtIndex:(unsigned long long)a0;
- (void)clearEntityCandidates;
- (void)addEntityCandidates:(id)a0;
- (unsigned long long)entityCandidatesCount;
- (id)entityCandidatesAtIndex:(unsigned long long)a0;
- (void)clearDetectedMentions;
- (void)addDetectedMentions:(id)a0;
- (unsigned long long)detectedMentionsCount;
- (id)detectedMentionsAtIndex:(unsigned long long)a0;

@end
