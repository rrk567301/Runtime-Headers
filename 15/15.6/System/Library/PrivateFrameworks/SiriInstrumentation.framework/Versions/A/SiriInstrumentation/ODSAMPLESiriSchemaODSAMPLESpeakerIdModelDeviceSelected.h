@class NSData;

@interface ODSAMPLESiriSchemaODSAMPLESpeakerIdModelDeviceSelected : SISchemaInstrumentationMessage {
    struct { unsigned char isDeviceSelected : 1; } _has;
}

@property (nonatomic) char isDeviceSelected;
@property (nonatomic) char hasIsDeviceSelected;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsDeviceSelected;
- (id)suppressMessageUnderConditions;

@end
