@class NSString, NSArray, NSData;

@interface PLUSSchemaPLUSMediaCandidateEntity : SISchemaInstrumentationMessage {
    struct { unsigned char nominated : 1; unsigned char confidence : 1; } _has;
}

@property (copy, nonatomic) NSString *entityAdamId;
@property (nonatomic) char hasEntityAdamId;
@property (nonatomic) char nominated;
@property (nonatomic) char hasNominated;
@property (nonatomic) double confidence;
@property (nonatomic) char hasConfidence;
@property (copy, nonatomic) NSArray *entityFeedbackHistorys;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteNominated;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addEntityFeedbackHistory:(id)a0;
- (void)clearEntityFeedbackHistory;
- (void)deleteConfidence;
- (void)deleteEntityAdamId;
- (void)deleteEntityFeedbackHistory;
- (id)entityFeedbackHistoryAtIndex:(unsigned long long)a0;
- (unsigned long long)entityFeedbackHistoryCount;
- (id)suppressMessageUnderConditions;

@end
