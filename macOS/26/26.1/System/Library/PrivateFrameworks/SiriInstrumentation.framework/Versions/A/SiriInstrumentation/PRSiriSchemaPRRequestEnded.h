@class NSData, SISchemaUUID;

@interface PRSiriSchemaPRRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char eventName : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *transcriptEventId;
@property (nonatomic) BOOL hasTranscriptEventId;
@property (nonatomic) int eventName;
@property (nonatomic) BOOL hasEventName;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteEventName;
- (void)deleteTranscriptEventId;

@end
