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

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteScore;
- (void)deleteTask;
- (void)deleteTaskId;

@end
