@class NSData;

@interface FLSchemaFLTaskOutcome : SISchemaInstrumentationMessage {
    struct { unsigned char taskStatus : 1; unsigned char promptStatus : 1; } _has;
}

@property (nonatomic) int taskStatus;
@property (nonatomic) BOOL hasTaskStatus;
@property (nonatomic) int promptStatus;
@property (nonatomic) BOOL hasPromptStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deletePromptStatus;
- (void)deleteTaskStatus;

@end
