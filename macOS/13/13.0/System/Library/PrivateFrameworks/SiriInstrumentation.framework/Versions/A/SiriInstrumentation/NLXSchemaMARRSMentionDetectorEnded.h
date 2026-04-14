@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSMentionDetectorEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *mentionDetectorSpans;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteLinkId;
- (void)clearMentionDetectorSpans;
- (void)deleteMentionDetectorSpans;
- (void)addMentionDetectorSpans:(id)a0;
- (unsigned long long)mentionDetectorSpansCount;
- (id)mentionDetectorSpansAtIndex:(unsigned long long)a0;

@end
