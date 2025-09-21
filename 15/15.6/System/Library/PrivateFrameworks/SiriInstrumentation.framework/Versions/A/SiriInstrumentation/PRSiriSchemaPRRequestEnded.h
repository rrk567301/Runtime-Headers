@class NSData, SISchemaUUID;

@interface PRSiriSchemaPRRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char eventName : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *transcriptEventId;
@property (nonatomic) char hasTranscriptEventId;
@property (nonatomic) int eventName;
@property (nonatomic) char hasEventName;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEventName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteTranscriptEventId;
- (id)suppressMessageUnderConditions;

@end
