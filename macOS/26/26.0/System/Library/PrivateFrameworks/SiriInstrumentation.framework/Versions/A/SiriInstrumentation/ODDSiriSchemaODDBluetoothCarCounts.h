@class NSData, ODDSiriSchemaODDTurnCounts;

@interface ODDSiriSchemaODDBluetoothCarCounts : SISchemaInstrumentationMessage {
    struct { unsigned char bluetoothCarConnectionsInTheLast24Hours : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDTurnCounts *siriInBTCarTurnCounts;
@property (nonatomic) BOOL hasSiriInBTCarTurnCounts;
@property (nonatomic) unsigned int bluetoothCarConnectionsInTheLast24Hours;
@property (nonatomic) BOOL hasBluetoothCarConnectionsInTheLast24Hours;
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
- (void)deleteBluetoothCarConnectionsInTheLast24Hours;
- (void)deleteSiriInBTCarTurnCounts;

@end
