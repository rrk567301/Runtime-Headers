@class NSString, SISchemaHardwareInterfaceIdentifier, NSData;

@interface SISchemaTextToSpeechBegin : SISchemaInstrumentationMessage {
    struct { unsigned char audioOutputRoute : 1; } _has;
}

@property (copy, nonatomic) NSString *aceID;
@property (nonatomic) char hasAceID;
@property (nonatomic) int audioOutputRoute;
@property (nonatomic) char hasAudioOutputRoute;
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
- (void)deleteAceID;
- (void)deleteAudioOutputRoute;
- (id)suppressMessageUnderConditions;

@end
