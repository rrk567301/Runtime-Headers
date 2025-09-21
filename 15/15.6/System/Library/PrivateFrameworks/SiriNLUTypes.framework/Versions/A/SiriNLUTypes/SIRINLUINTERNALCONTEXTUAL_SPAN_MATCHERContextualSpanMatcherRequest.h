@class SIRINLUINTERNALTokenChain, SIRINLUEXTERNALUUID, SIRINLUEXTERNALRequestID, SIRINLUEXTERNALNLContext;

@interface SIRINLUINTERNALCONTEXTUAL_SPAN_MATCHERContextualSpanMatcherRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *requestId;
@property (readonly, nonatomic) char hasTokenChain;
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain;
@property (readonly, nonatomic) char hasNlContext;
@property (retain, nonatomic) SIRINLUEXTERNALNLContext *nlContext;
@property (readonly, nonatomic) char hasNluRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *nluRequestId;

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
