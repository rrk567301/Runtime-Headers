@class NSData;

@interface NETSchemaNETBluetoothDevice : SISchemaInstrumentationMessage {
    struct { unsigned char index : 1; unsigned char rssi : 1; } _has;
}

@property (nonatomic) unsigned int index;
@property (nonatomic) char hasIndex;
@property (nonatomic) double rssi;
@property (nonatomic) char hasRssi;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIndex;
- (void)deleteRssi;
- (id)suppressMessageUnderConditions;

@end
