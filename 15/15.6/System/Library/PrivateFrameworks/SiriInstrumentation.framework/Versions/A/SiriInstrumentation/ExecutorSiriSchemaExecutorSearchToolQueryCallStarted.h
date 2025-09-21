@class NSData;

@interface ExecutorSiriSchemaExecutorSearchToolQueryCallStarted : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char executorSearchToolQueryType : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
@property (nonatomic) int executorSearchToolQueryType;
@property (nonatomic) char hasExecutorSearchToolQueryType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExecutorSearchToolQueryType;
- (void)deleteExists;
- (id)suppressMessageUnderConditions;

@end
