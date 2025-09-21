@class NSString, SIRINLUINTERNALTokenChain, SIRINLUEXTERNALUUID, SIRINLUINTERNALNLv4EmbeddingTensor, SIRINLUEXTERNALRequestID;

@interface SIRINLUINTERNALMENTION_DETECTORMentionDetectorRequest : PBRequest <NSCopying> {
    struct { unsigned char maxCandidates : 1; } _has;
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
@property (nonatomic) char hasMaxCandidates;
@property (nonatomic) unsigned long long maxCandidates;
@property (readonly, nonatomic) char hasCdmRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *cdmRequestId;

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

@end
