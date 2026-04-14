@class NSArray, NSData;

@interface ExecutorSiriSchemaExecutorAppIntentCallFailed : SISchemaInstrumentationMessage {
    struct { unsigned char reason : 1; unsigned char errorKind : 1; } _has;
}

@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) int errorKind;
@property (nonatomic) BOOL hasErrorKind;
@property (copy, nonatomic) NSArray *errors;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearErrors;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)deleteReason;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addErrors:(id)a0;
- (id)errorsAtIndex:(unsigned long long)a0;
- (unsigned long long)errorsCount;
- (void)deleteErrorKind;
- (void)deleteErrors;

@end
