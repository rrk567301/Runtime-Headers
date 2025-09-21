@class NSData, SISchemaUUID;

@interface ExecutorSiriSchemaExecutorClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char spanId : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *ifRequestId;
@property (nonatomic) char hasIfRequestId;
@property (retain, nonatomic) SISchemaUUID *executorId;
@property (nonatomic) char hasExecutorId;
@property (nonatomic) unsigned long long spanId;
@property (nonatomic) char hasSpanId;
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
- (void)deleteExecutorId;
- (void)deleteIfRequestId;
- (void)deleteSpanId;
- (id)suppressMessageUnderConditions;

@end
