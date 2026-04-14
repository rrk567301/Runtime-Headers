@class NSString, LTSchemaTask, NSData;

@interface LTSchemaSafariFeedbackEvent : SISchemaInstrumentationMessage

@property (retain, nonatomic) LTSchemaTask *task;
@property (nonatomic) BOOL hasTask;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) BOOL hasSessionID;
@property (copy, nonatomic) NSString *userFeedbackContentSource;
@property (nonatomic) BOOL hasUserFeedbackContentSource;
@property (copy, nonatomic) NSString *userFeedbackContentTarget;
@property (nonatomic) BOOL hasUserFeedbackContentTarget;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteUserFeedbackContentSource;
- (void)deleteSessionID;
- (void)deleteUserFeedbackContentTarget;
- (void)deleteTask;

@end
