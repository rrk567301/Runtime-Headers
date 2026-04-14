@class NSData, ODDSiriSchemaODDTurnCounts;

@interface ODDSiriSchemaODDAssistantCarPlayCounts : SISchemaInstrumentationMessage {
    struct { unsigned char carPlayConnectionsInTheLast24Hours : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDTurnCounts *turnCounts;
@property (nonatomic) BOOL hasTurnCounts;
@property (nonatomic) unsigned int carPlayConnectionsInTheLast24Hours;
@property (nonatomic) BOOL hasCarPlayConnectionsInTheLast24Hours;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCarPlayConnectionsInTheLast24Hours;
- (void)deleteTurnCounts;

@end
