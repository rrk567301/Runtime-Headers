@class SISchemaClientTurnContext, SISchemaClientAnyEvent;

@interface SISchemaClientTurnBasedEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTurnContext;
@property (retain, nonatomic) SISchemaClientTurnContext *turnContext;
@property (readonly, nonatomic) BOOL hasEvent;
@property (retain, nonatomic) SISchemaClientAnyEvent *event;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)si_dictionaryRepresentation;

@end
