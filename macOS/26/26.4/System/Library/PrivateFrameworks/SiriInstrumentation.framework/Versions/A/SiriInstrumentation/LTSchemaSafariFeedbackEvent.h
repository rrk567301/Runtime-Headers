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
- (void)deleteUserFeedbackContentTarget;
- (void)deleteSessionID;
- (void)deleteUserFeedbackContentSource;
- (void)deleteTask;

@end
