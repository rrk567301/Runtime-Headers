@class NSString, SIRINLUEXTERNALUUID, SIRINLUINTERNALTokenChain;

@interface SIRINLUINTERNALTOKENIZERTokenizerResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasTokenChain;
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain;
@property (readonly, nonatomic) char hasText;
@property (retain, nonatomic) NSString *text;
@property (readonly, nonatomic) char hasAsrId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *asrId;

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
