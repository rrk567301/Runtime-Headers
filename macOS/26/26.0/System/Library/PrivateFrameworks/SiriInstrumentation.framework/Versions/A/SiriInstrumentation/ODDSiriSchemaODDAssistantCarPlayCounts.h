@class NSData, ODDSiriSchemaODDTurnCounts;

@interface ODDSiriSchemaODDAssistantCarPlayCounts : SISchemaInstrumentationMessage {
    struct { unsigned char carPlayConnectionsInTheLast24Hours : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDTurnCounts *turnCounts;
@property (nonatomic) BOOL hasTurnCounts;
@property (nonatomic) unsigned int carPlayConnectionsInTheLast24Hours;
@property (nonatomic) BOOL hasCarPlayConnectionsInTheLast24Hours;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteCarPlayConnectionsInTheLast24Hours;
- (void)deleteTurnCounts;

@end
