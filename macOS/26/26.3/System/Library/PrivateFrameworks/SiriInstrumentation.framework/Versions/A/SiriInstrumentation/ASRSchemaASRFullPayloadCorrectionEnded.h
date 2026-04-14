@class NSData, SISchemaUUID;

@interface ASRSchemaASRFullPayloadCorrectionEnded : SISchemaInstrumentationMessage {
    struct { unsigned char responseTimeInNs : 1; } _has;
}

@property (nonatomic) unsigned long long responseTimeInNs;
@property (nonatomic) BOOL hasResponseTimeInNs;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
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
- (void)deleteResponseTimeInNs;

@end
