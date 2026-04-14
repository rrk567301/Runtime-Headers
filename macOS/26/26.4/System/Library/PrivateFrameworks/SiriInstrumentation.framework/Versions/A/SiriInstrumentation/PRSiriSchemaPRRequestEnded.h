@class NSData, SISchemaUUID;

@interface PRSiriSchemaPRRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char eventName : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *transcriptEventId;
@property (nonatomic) BOOL hasTranscriptEventId;
@property (nonatomic) int eventName;
@property (nonatomic) BOOL hasEventName;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEventName;
- (void)deleteTranscriptEventId;

@end
