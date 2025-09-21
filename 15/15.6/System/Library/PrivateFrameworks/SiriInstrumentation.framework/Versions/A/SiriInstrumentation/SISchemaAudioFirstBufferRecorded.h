@class SISchemaHardwareInterfaceIdentifier, NSData;

@interface SISchemaAudioFirstBufferRecorded : SISchemaInstrumentationMessage {
    struct { unsigned char audioInputRoute : 1; } _has;
}

@property (nonatomic) int audioInputRoute;
@property (nonatomic) char hasAudioInputRoute;
@property (retain, nonatomic) SISchemaHardwareInterfaceIdentifier *hardwareInterfaceVendorID;
@property (nonatomic) char hasHardwareInterfaceVendorID;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteHardwareInterfaceVendorID;
- (void)deleteAudioInputRoute;
- (id)suppressMessageUnderConditions;

@end
