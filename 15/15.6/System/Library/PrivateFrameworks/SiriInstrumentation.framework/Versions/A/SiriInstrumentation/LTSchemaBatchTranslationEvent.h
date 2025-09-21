@class NSString, LTSchemaError, NSData, LTSchemaTask;

@interface LTSchemaBatchTranslationEvent : SISchemaInstrumentationMessage {
    struct { unsigned char batchSeqNo : 1; unsigned char numberOfParagraphs : 1; unsigned char responseTimeMs : 1; unsigned char numParagraphFailures : 1; } _has;
}

@property (retain, nonatomic) LTSchemaTask *task;
@property (nonatomic) char hasTask;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) char hasSessionID;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) char hasRequestID;
@property (copy, nonatomic) NSString *systemLocale;
@property (nonatomic) char hasSystemLocale;
@property (nonatomic) unsigned int batchSeqNo;
@property (nonatomic) char hasBatchSeqNo;
@property (nonatomic) unsigned int numberOfParagraphs;
@property (nonatomic) char hasNumberOfParagraphs;
@property (nonatomic) unsigned int responseTimeMs;
@property (nonatomic) char hasResponseTimeMs;
@property (nonatomic) unsigned int numParagraphFailures;
@property (nonatomic) char hasNumParagraphFailures;
@property (retain, nonatomic) LTSchemaError *error;
@property (nonatomic) char hasError;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSessionID;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteRequestID;
- (void)deleteBatchSeqNo;
- (void)deleteError;
- (void)deleteNumParagraphFailures;
- (void)deleteNumberOfParagraphs;
- (void)deleteResponseTimeMs;
- (void)deleteSystemLocale;
- (void)deleteTask;
- (id)suppressMessageUnderConditions;

@end
