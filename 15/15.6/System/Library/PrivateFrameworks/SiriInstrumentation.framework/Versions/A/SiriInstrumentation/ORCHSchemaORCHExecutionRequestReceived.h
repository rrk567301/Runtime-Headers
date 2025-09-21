@class NSData;

@interface ORCHSchemaORCHExecutionRequestReceived : SISchemaInstrumentationMessage {
    struct { unsigned char preExecutionDecision : 1; unsigned char executionForRSKE : 1; unsigned char commandSource : 1; } _has;
}

@property (nonatomic) int preExecutionDecision;
@property (nonatomic) char hasPreExecutionDecision;
@property (nonatomic) char executionForRSKE;
@property (nonatomic) char hasExecutionForRSKE;
@property (nonatomic) int commandSource;
@property (nonatomic) char hasCommandSource;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCommandSource;
- (void)deleteExecutionForRSKE;
- (void)deletePreExecutionDecision;
- (id)suppressMessageUnderConditions;

@end
