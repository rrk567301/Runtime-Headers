@class NSData;

@interface MHSchemaMHAssistantDaemonAudioBluetoothInfo : SISchemaInstrumentationMessage {
    struct { unsigned char state : 1; unsigned char bluetoothAudioDeviceCategory : 1; } _has;
}

@property (nonatomic) int state;
@property (nonatomic) char hasState;
@property (nonatomic) int bluetoothAudioDeviceCategory;
@property (nonatomic) char hasBluetoothAudioDeviceCategory;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteBluetoothAudioDeviceCategory;
- (void)deleteState;
- (id)suppressMessageUnderConditions;

@end
