@class NSData;

@interface ExecutorSiriSchemaExecutorRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char inputPayload : 1; } _has;
}

@property (nonatomic) int inputPayload;
@property (nonatomic) BOOL hasInputPayload;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteInputPayload;

@end
