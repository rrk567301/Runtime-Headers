@class NSString, SIRINLUINTERNALTokenChain, SIRINLUEXTERNALUUID, SIRINLUEXTERNALNLContext;

@interface SIRINLUINTERNALSPANMATCHSpanMatchRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasTokenChain;
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain;
@property (readonly, nonatomic) BOOL hasNlContext;
@property (retain, nonatomic) SIRINLUEXTERNALNLContext *nlContext;
@property (readonly, nonatomic) BOOL hasUtterance;
@property (retain, nonatomic) NSString *utterance;
@property (readonly, nonatomic) BOOL hasAsrId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *asrId;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
