@class NSString, LTSchemaTask, NSData;

@interface LTSchemaSafariFeedbackEvent : SISchemaInstrumentationMessage

@property (retain, nonatomic) LTSchemaTask *task;
@property (nonatomic) char hasTask;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) char hasSessionID;
@property (copy, nonatomic) NSString *userFeedbackContentSource;
@property (nonatomic) char hasUserFeedbackContentSource;
@property (copy, nonatomic) NSString *userFeedbackContentTarget;
@property (nonatomic) char hasUserFeedbackContentTarget;
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
- (void)deleteUserFeedbackContentTarget;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteUserFeedbackContentSource;
- (void)deleteTask;
- (id)suppressMessageUnderConditions;

@end
