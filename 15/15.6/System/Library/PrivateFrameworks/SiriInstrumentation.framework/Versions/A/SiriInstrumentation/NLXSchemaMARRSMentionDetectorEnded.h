@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSMentionDetectorEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *mentionDetectorSpans;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
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
- (void)addMentionDetectorSpans:(id)a0;
- (void)clearMentionDetectorSpans;
- (void)deleteLinkId;
- (void)deleteMentionDetectorSpans;
- (id)mentionDetectorSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)mentionDetectorSpansCount;
- (id)suppressMessageUnderConditions;

@end
