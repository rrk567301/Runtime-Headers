@class NSData, SISchemaUUID;

@interface FLOWSchemaFLOWMediaPlayerRadioStationContext : SISchemaInstrumentationMessage {
    struct { unsigned char radioStationSubtype : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (nonatomic) int radioStationSubtype;
@property (nonatomic) char hasRadioStationSubtype;
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
- (void)deleteLinkId;
- (void)deleteRadioStationSubtype;
- (id)suppressMessageUnderConditions;

@end
