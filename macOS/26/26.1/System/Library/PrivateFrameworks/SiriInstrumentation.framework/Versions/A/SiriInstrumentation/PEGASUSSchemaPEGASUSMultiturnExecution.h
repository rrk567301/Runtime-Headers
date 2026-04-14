@class NSData;

@interface PEGASUSSchemaPEGASUSMultiturnExecution : SISchemaInstrumentationMessage {
    struct { unsigned char isRewrite : 1; unsigned char triggerError : 1; } _has;
}

@property (nonatomic) BOOL isRewrite;
@property (nonatomic) BOOL hasIsRewrite;
@property (nonatomic) int triggerError;
@property (nonatomic) BOOL hasTriggerError;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteIsRewrite;
- (void)deleteTriggerError;

@end
