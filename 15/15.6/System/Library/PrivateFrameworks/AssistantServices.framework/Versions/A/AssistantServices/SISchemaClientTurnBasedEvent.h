@class SISchemaClientTurnContext, SISchemaClientAnyEvent;

@interface SISchemaClientTurnBasedEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasTurnContext;
@property (retain, nonatomic) SISchemaClientTurnContext *turnContext;
@property (readonly, nonatomic) char hasEvent;
@property (retain, nonatomic) SISchemaClientAnyEvent *event;

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
- (id)si_dictionaryRepresentation;

@end
