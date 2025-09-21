@class SISchemaInstrumentationMessage, DUSchemaDUSpeechAudioRecord, DUSchemaDUSearchSessionRecord, DUSchemaDUEventMetadata, NSData, DUSchemaDUContent;

@interface DUSchemaDUEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) DUSchemaDUEventMetadata *metadata;
@property (nonatomic) char hasMetadata;
@property (retain, nonatomic) DUSchemaDUContent *content;
@property (nonatomic) char hasContent;
@property (retain, nonatomic) DUSchemaDUSpeechAudioRecord *speechAudioRecord;
@property (nonatomic) char hasSpeechAudioRecord;
@property (retain, nonatomic) DUSchemaDUSearchSessionRecord *searchSessionRecord;
@property (nonatomic) char hasSearchSessionRecord;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteContent;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteMetadata;
- (void)deleteSearchSessionRecord;
- (void)deleteSpeechAudioRecord;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
