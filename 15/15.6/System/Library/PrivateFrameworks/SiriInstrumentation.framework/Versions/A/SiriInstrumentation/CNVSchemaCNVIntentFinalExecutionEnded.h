@class NSData;

@interface CNVSchemaCNVIntentFinalExecutionEnded : SISchemaInstrumentationMessage {
    struct { unsigned char eagerStatus : 1; unsigned char bypassReason : 1; unsigned char maxRss : 1; } _has;
}

@property (nonatomic) int eagerStatus;
@property (nonatomic) char hasEagerStatus;
@property (nonatomic) int bypassReason;
@property (nonatomic) char hasBypassReason;
@property (nonatomic) unsigned long long maxRss;
@property (nonatomic) char hasMaxRss;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteBypassReason;
- (void)deleteEagerStatus;
- (void)deleteMaxRss;
- (id)suppressMessageUnderConditions;

@end
