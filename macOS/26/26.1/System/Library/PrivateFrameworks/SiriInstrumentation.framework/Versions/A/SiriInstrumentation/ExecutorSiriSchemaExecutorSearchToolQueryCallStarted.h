@class NSData;

@interface ExecutorSiriSchemaExecutorSearchToolQueryCallStarted : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char executorSearchToolQueryType : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (nonatomic) int executorSearchToolQueryType;
@property (nonatomic) BOOL hasExecutorSearchToolQueryType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (void)deleteExists;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteExecutorSearchToolQueryType;

@end
