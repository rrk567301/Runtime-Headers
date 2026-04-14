@class NSData;

@interface ODSAMPLESiriSchemaODSAMPLESpeakerIdModelDeviceSelected : SISchemaInstrumentationMessage {
    struct { unsigned char isDeviceSelected : 1; } _has;
}

@property (nonatomic) BOOL isDeviceSelected;
@property (nonatomic) BOOL hasIsDeviceSelected;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteIsDeviceSelected;

@end
