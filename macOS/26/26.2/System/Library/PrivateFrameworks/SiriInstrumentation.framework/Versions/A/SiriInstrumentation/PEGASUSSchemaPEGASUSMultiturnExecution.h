@class NSData;

@interface PEGASUSSchemaPEGASUSMultiturnExecution : SISchemaInstrumentationMessage {
    struct { unsigned char isRewrite : 1; unsigned char triggerError : 1; } _has;
}

@property (nonatomic) BOOL isRewrite;
@property (nonatomic) BOOL hasIsRewrite;
@property (nonatomic) int triggerError;
@property (nonatomic) BOOL hasTriggerError;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteIsRewrite;
- (void)deleteTriggerError;

@end
