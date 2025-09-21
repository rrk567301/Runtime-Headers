@class NSData;

@interface ExecutorSiriSchemaExecutorAppIntentCallStarted : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char appIntentSessionId : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
@property (nonatomic) unsigned long long appIntentSessionId;
@property (nonatomic) char hasAppIntentSessionId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAppIntentSessionId;
- (void)deleteExists;
- (id)suppressMessageUnderConditions;

@end
