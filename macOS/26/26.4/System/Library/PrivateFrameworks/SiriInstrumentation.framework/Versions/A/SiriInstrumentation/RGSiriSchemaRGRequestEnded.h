@class NSData, SISchemaUUID;

@interface RGSiriSchemaRGRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char responseSource : 1; unsigned char characterCount : 1; unsigned char wordCount : 1; unsigned char fallbackReason : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) int responseSource;
@property (nonatomic) BOOL hasResponseSource;
@property (nonatomic) unsigned int characterCount;
@property (nonatomic) BOOL hasCharacterCount;
@property (nonatomic) unsigned int wordCount;
@property (nonatomic) BOOL hasWordCount;
@property (nonatomic) int fallbackReason;
@property (nonatomic) BOOL hasFallbackReason;
@property (retain, nonatomic) SISchemaUUID *transcriptEventId;
@property (nonatomic) BOOL hasTranscriptEventId;
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
- (void)deleteWordCount;
- (void)deleteCharacterCount;
- (void)deleteFallbackReason;
- (void)deleteLinkId;
- (void)deleteResponseSource;
- (void)deleteTranscriptEventId;

@end
