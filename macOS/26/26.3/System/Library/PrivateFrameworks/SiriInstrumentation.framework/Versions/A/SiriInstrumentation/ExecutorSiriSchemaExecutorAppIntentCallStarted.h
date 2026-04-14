@class NSData;

@interface ExecutorSiriSchemaExecutorAppIntentCallStarted : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char appIntentSessionId : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (nonatomic) unsigned long long appIntentSessionId;
@property (nonatomic) BOOL hasAppIntentSessionId;
@property (readonly, nonatomic) NSData *jsonData;

- (void)deleteExists;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAppIntentSessionId;

@end
