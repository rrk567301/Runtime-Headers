@class NSData, SISchemaUUID;

@interface FLOWSchemaFLOWMediaPlayerRadioStationContext : SISchemaInstrumentationMessage {
    struct { unsigned char radioStationSubtype : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) int radioStationSubtype;
@property (nonatomic) BOOL hasRadioStationSubtype;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteLinkId;
- (void)deleteRadioStationSubtype;

@end
