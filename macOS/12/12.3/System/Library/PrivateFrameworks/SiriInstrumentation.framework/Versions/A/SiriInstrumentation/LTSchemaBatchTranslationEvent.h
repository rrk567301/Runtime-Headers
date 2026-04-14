@class NSString, LTSchemaError, NSData, LTSchemaTask;

@interface LTSchemaBatchTranslationEvent : SISchemaInstrumentationMessage {
    struct { unsigned char batchSeqNo : 1; unsigned char numberOfParagraphs : 1; unsigned char responseTimeMs : 1; unsigned char numParagraphFailures : 1; } _has;
}

@property (retain, nonatomic) LTSchemaTask *task;
@property (nonatomic) BOOL hasTask;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) BOOL hasSessionID;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) BOOL hasRequestID;
@property (copy, nonatomic) NSString *systemLocale;
@property (nonatomic) BOOL hasSystemLocale;
@property (nonatomic) unsigned int batchSeqNo;
@property (nonatomic) BOOL hasBatchSeqNo;
@property (nonatomic) unsigned int numberOfParagraphs;
@property (nonatomic) BOOL hasNumberOfParagraphs;
@property (nonatomic) unsigned int responseTimeMs;
@property (nonatomic) BOOL hasResponseTimeMs;
@property (nonatomic) unsigned int numParagraphFailures;
@property (nonatomic) BOOL hasNumParagraphFailures;
@property (retain, nonatomic) LTSchemaError *error;
@property (nonatomic) BOOL hasError;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRequestID;
- (void)deleteTask;
- (void)deleteSessionID;
- (void)deleteSystemLocale;
- (void)deleteBatchSeqNo;
- (void)deleteNumberOfParagraphs;
- (void)deleteResponseTimeMs;
- (void)deleteNumParagraphFailures;
- (void)deleteError;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
