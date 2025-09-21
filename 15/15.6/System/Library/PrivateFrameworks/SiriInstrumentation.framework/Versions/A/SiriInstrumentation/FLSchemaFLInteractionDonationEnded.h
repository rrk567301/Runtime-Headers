@class NSArray, NSData, FLSchemaFLTupleInteraction, SISchemaUUID;

@interface FLSchemaFLInteractionDonationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char absoluteTime : 1; unsigned char donationTime : 1; unsigned char actionStatementId : 1; unsigned char donationTrigger : 1; unsigned char wasTupleDonated : 1; } _has;
}

@property (nonatomic) double absoluteTime;
@property (nonatomic) char hasAbsoluteTime;
@property (nonatomic) double donationTime;
@property (nonatomic) char hasDonationTime;
@property (retain, nonatomic) SISchemaUUID *ifSessionId;
@property (nonatomic) char hasIfSessionId;
@property (nonatomic) unsigned int actionStatementId;
@property (nonatomic) char hasActionStatementId;
@property (nonatomic) int donationTrigger;
@property (nonatomic) char hasDonationTrigger;
@property (nonatomic) char wasTupleDonated;
@property (nonatomic) char hasWasTupleDonated;
@property (retain, nonatomic) FLSchemaFLTupleInteraction *tuple;
@property (nonatomic) char hasTuple;
@property (copy, nonatomic) NSArray *candidates;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)candidatesCount;
- (void)clearCandidates;
- (id)initWithJSON:(id)a0;
- (void)addCandidates:(id)a0;
- (id)candidatesAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAbsoluteTime;
- (void)deleteActionStatementId;
- (void)deleteCandidates;
- (void)deleteDonationTime;
- (void)deleteDonationTrigger;
- (void)deleteIfSessionId;
- (void)deleteTuple;
- (void)deleteWasTupleDonated;
- (id)suppressMessageUnderConditions;

@end
