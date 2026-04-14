@class NSData;

@interface MHSchemaMHAssistantDaemonAudioBluetoothInfo : SISchemaInstrumentationMessage {
    struct { unsigned char state : 1; unsigned char bluetoothAudioDeviceCategory : 1; } _has;
}

@property (nonatomic) int state;
@property (nonatomic) BOOL hasState;
@property (nonatomic) int bluetoothAudioDeviceCategory;
@property (nonatomic) BOOL hasBluetoothAudioDeviceCategory;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteBluetoothAudioDeviceCategory;
- (void)deleteState;

@end
