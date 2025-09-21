@class USOSchemaUSOGraph, NSData, SISchemaUUID;

@interface NLXSchemaCDMTask : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *taskId;
@property (nonatomic) char hasTaskId;
@property (retain, nonatomic) USOSchemaUSOGraph *task;
@property (nonatomic) char hasTask;
@property (nonatomic) double score;
@property (nonatomic) char hasScore;
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
- (void)deleteScore;
- (void)deleteTask;
- (void)deleteTaskId;
- (id)suppressMessageUnderConditions;

@end
