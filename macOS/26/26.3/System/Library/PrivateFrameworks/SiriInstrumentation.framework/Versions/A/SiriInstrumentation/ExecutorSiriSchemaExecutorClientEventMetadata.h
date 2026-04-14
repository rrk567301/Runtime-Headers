@class NSData, SISchemaUUID;

@interface ExecutorSiriSchemaExecutorClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char spanId : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *ifRequestId;
@property (nonatomic) BOOL hasIfRequestId;
@property (retain, nonatomic) SISchemaUUID *executorId;
@property (nonatomic) BOOL hasExecutorId;
@property (nonatomic) unsigned long long spanId;
@property (nonatomic) BOOL hasSpanId;
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
- (void)deleteExecutorId;
- (void)deleteIfRequestId;
- (void)deleteSpanId;

@end
