@class NSData;

@interface FLSchemaFLTaskOutcome : SISchemaInstrumentationMessage {
    struct { unsigned char taskStatus : 1; unsigned char promptStatus : 1; } _has;
}

@property (nonatomic) int taskStatus;
@property (nonatomic) BOOL hasTaskStatus;
@property (nonatomic) int promptStatus;
@property (nonatomic) BOOL hasPromptStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deletePromptStatus;
- (void)deleteTaskStatus;

@end
