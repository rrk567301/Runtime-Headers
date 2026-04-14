@class NSData, ODDSiriSchemaODDTurnCounts;

@interface ODDSiriSchemaODDBluetoothCarCounts : SISchemaInstrumentationMessage {
    struct { unsigned char bluetoothCarConnectionsInTheLast24Hours : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDTurnCounts *siriInBTCarTurnCounts;
@property (nonatomic) BOOL hasSiriInBTCarTurnCounts;
@property (nonatomic) unsigned int bluetoothCarConnectionsInTheLast24Hours;
@property (nonatomic) BOOL hasBluetoothCarConnectionsInTheLast24Hours;
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
- (void)deleteBluetoothCarConnectionsInTheLast24Hours;
- (void)deleteSiriInBTCarTurnCounts;

@end
