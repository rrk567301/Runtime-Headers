@class USOSchemaUSOGraph, NSData, SISchemaUUID;

@interface NLXSchemaCDMSystemReportedFailure : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *taskId;
@property (nonatomic) BOOL hasTaskId;
@property (retain, nonatomic) USOSchemaUSOGraph *reason;
@property (nonatomic) BOOL hasReason;
@property (retain, nonatomic) USOSchemaUSOGraph *task;
@property (nonatomic) BOOL hasTask;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)deleteReason;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTask;
- (void)deleteTaskId;

@end
