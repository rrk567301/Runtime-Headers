@class USOSchemaUSOGraph, NSData, SISchemaUUID;

@interface NLXSchemaCDMTask : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *taskId;
@property (nonatomic) BOOL hasTaskId;
@property (retain, nonatomic) USOSchemaUSOGraph *task;
@property (nonatomic) BOOL hasTask;
@property (nonatomic) double score;
@property (nonatomic) BOOL hasScore;
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
- (void)deleteTask;
- (void)deleteTaskId;
- (void)deleteScore;

@end
