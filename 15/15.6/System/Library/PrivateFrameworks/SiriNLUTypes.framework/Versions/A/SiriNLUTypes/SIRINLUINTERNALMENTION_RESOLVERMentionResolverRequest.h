@class NSString, SIRINLUINTERNALTokenChain, SIRINLUEXTERNALUUID, SIRINLUINTERNALNLv4EmbeddingTensor, NSMutableArray, SIRINLUEXTERNALRequestID;

@interface SIRINLUINTERNALMENTION_RESOLVERMentionResolverRequest : PBRequest <NSCopying> {
    struct { unsigned char maxCandidates : 1; unsigned char turnIndex : 1; } _has;
}

@property (readonly, nonatomic) char hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (readonly, nonatomic) char hasNluRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *nluRequestId;
@property (readonly, nonatomic) char hasResultCandidateId;
@property (retain, nonatomic) NSString *resultCandidateId;
@property (readonly, nonatomic) char hasUtterance;
@property (retain, nonatomic) NSString *utterance;
@property (readonly, nonatomic) char hasTokenChain;
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain;
@property (readonly, nonatomic) char hasEmbeddingTensor;
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddingTensor;
@property (retain, nonatomic) NSMutableArray *entityCandidates;
@property (retain, nonatomic) NSMutableArray *detectedMentions;
@property (nonatomic) char hasMaxCandidates;
@property (nonatomic) unsigned long long maxCandidates;
@property (retain, nonatomic) NSMutableArray *matchingSpans;
@property (nonatomic) char hasTurnIndex;
@property (nonatomic) unsigned long long turnIndex;
@property (readonly, nonatomic) char hasCdmRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *cdmRequestId;
@property (retain, nonatomic) NSMutableArray *contextualSpans;

+ (Class)contextualSpansType;
+ (Class)detectedMentionsType;
+ (Class)entityCandidatesType;
+ (Class)matchingSpansType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addContextualSpans:(id)a0;
- (void)addMatchingSpans:(id)a0;
- (void)clearContextualSpans;
- (void)clearMatchingSpans;
- (id)contextualSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)contextualSpansCount;
- (id)matchingSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)matchingSpansCount;
- (void)addDetectedMentions:(id)a0;
- (void)addEntityCandidates:(id)a0;
- (void)clearDetectedMentions;
- (void)clearEntityCandidates;
- (id)detectedMentionsAtIndex:(unsigned long long)a0;
- (unsigned long long)detectedMentionsCount;
- (id)entityCandidatesAtIndex:(unsigned long long)a0;
- (unsigned long long)entityCandidatesCount;

@end
