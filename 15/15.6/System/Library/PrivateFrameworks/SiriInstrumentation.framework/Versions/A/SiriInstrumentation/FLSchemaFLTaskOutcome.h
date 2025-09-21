@class NSData;

@interface FLSchemaFLTaskOutcome : SISchemaInstrumentationMessage {
    struct { unsigned char taskStatus : 1; unsigned char promptStatus : 1; } _has;
}

@property (nonatomic) int taskStatus;
@property (nonatomic) char hasTaskStatus;
@property (nonatomic) int promptStatus;
@property (nonatomic) char hasPromptStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePromptStatus;
- (void)deleteTaskStatus;
- (id)suppressMessageUnderConditions;

@end
