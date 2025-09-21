@class NSData, SISchemaUUID;

@interface RGSiriSchemaRGRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char responseSource : 1; unsigned char characterCount : 1; unsigned char wordCount : 1; unsigned char fallbackReason : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (nonatomic) int responseSource;
@property (nonatomic) char hasResponseSource;
@property (nonatomic) unsigned int characterCount;
@property (nonatomic) char hasCharacterCount;
@property (nonatomic) unsigned int wordCount;
@property (nonatomic) char hasWordCount;
@property (nonatomic) int fallbackReason;
@property (nonatomic) char hasFallbackReason;
@property (retain, nonatomic) SISchemaUUID *transcriptEventId;
@property (nonatomic) char hasTranscriptEventId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteWordCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCharacterCount;
- (void)deleteFallbackReason;
- (void)deleteLinkId;
- (void)deleteResponseSource;
- (void)deleteTranscriptEventId;
- (id)suppressMessageUnderConditions;

@end
