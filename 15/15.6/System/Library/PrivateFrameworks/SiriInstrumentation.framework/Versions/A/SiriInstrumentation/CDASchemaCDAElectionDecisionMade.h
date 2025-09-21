@class NSArray, CDASchemaCDAScoreBoosters, NSData, CDASchemaCDAParticipant;

@interface CDASchemaCDAElectionDecisionMade : SISchemaInstrumentationMessage {
    struct { unsigned char version : 1; unsigned char decision : 1; unsigned char previousDecision : 1; unsigned char timeSinceLastDecisionInMs : 1; unsigned char rawGoodnessScore : 1; } _has;
}

@property (nonatomic) float version;
@property (nonatomic) char hasVersion;
@property (nonatomic) int decision;
@property (nonatomic) char hasDecision;
@property (nonatomic) int previousDecision;
@property (nonatomic) char hasPreviousDecision;
@property (retain, nonatomic) CDASchemaCDAParticipant *thisDevice;
@property (nonatomic) char hasThisDevice;
@property (retain, nonatomic) CDASchemaCDAParticipant *winningDevice;
@property (nonatomic) char hasWinningDevice;
@property (copy, nonatomic) NSArray *heardParticipants;
@property (nonatomic) unsigned long long timeSinceLastDecisionInMs;
@property (nonatomic) char hasTimeSinceLastDecisionInMs;
@property (nonatomic) unsigned int rawGoodnessScore;
@property (nonatomic) char hasRawGoodnessScore;
@property (retain, nonatomic) CDASchemaCDAScoreBoosters *goodnessScoreBoosts;
@property (nonatomic) char hasGoodnessScoreBoosts;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTimeSinceLastDecisionInMs;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addHeardParticipants:(id)a0;
- (void)clearHeardParticipants;
- (void)deleteDecision;
- (void)deleteGoodnessScoreBoosts;
- (void)deleteHeardParticipants;
- (void)deletePreviousDecision;
- (void)deleteRawGoodnessScore;
- (void)deleteThisDevice;
- (void)deleteVersion;
- (void)deleteWinningDevice;
- (id)heardParticipantsAtIndex:(unsigned long long)a0;
- (unsigned long long)heardParticipantsCount;
- (id)suppressMessageUnderConditions;

@end
