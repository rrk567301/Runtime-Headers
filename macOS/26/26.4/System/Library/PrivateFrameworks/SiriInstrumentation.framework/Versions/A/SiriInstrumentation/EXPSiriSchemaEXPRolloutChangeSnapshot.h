@class NSArray, NSData;

@interface EXPSiriSchemaEXPRolloutChangeSnapshot : SISchemaInstrumentationMessage {
    struct { unsigned char trialRolloutUpdateReceivedAtTimestampInMs : 1; } _has;
}

@property (nonatomic) unsigned long long trialRolloutUpdateReceivedAtTimestampInMs;
@property (nonatomic) BOOL hasTrialRolloutUpdateReceivedAtTimestampInMs;
@property (copy, nonatomic) NSArray *rollouts;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addRollouts:(id)a0;
- (void)clearRollouts;
- (void)deleteRollouts;
- (void)deleteTrialRolloutUpdateReceivedAtTimestampInMs;
- (id)rolloutsAtIndex:(unsigned long long)a0;
- (unsigned long long)rolloutsCount;

@end
