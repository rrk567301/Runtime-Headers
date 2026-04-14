@class SISchemaClientTurnContext, SISchemaClientAnyEvent;

@interface SISchemaClientTurnBasedEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTurnContext;
@property (retain, nonatomic) SISchemaClientTurnContext *turnContext;
@property (readonly, nonatomic) BOOL hasEvent;
@property (retain, nonatomic) SISchemaClientAnyEvent *event;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (id)si_dictionaryRepresentation;

@end
