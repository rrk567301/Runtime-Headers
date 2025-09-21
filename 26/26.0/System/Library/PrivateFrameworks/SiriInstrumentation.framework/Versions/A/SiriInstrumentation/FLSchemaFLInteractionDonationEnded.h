@class NSArray, NSData, FLSchemaFLTupleInteraction, SISchemaUUID;

@interface FLSchemaFLInteractionDonationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char absoluteTime : 1; unsigned char donationTime : 1; unsigned char actionStatementId : 1; unsigned char donationTrigger : 1; unsigned char wasTupleDonated : 1; } _has;
}

@property (nonatomic) double absoluteTime;
@property (nonatomic) BOOL hasAbsoluteTime;
@property (nonatomic) double donationTime;
@property (nonatomic) BOOL hasDonationTime;
@property (retain, nonatomic) SISchemaUUID *ifSessionId;
@property (nonatomic) BOOL hasIfSessionId;
@property (nonatomic) unsigned int actionStatementId;
@property (nonatomic) BOOL hasActionStatementId;
@property (nonatomic) int donationTrigger;
@property (nonatomic) BOOL hasDonationTrigger;
@property (nonatomic) BOOL wasTupleDonated;
@property (nonatomic) BOOL hasWasTupleDonated;
@property (retain, nonatomic) FLSchemaFLTupleInteraction *tuple;
@property (nonatomic) BOOL hasTuple;
@property (copy, nonatomic) NSArray *candidates;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearCandidates;
- (unsigned long long)candidatesCount;
- (void)addCandidates:(id)a0;
- (id)candidatesAtIndex:(unsigned long long)a0;
- (void)deleteAbsoluteTime;
- (void)deleteActionStatementId;
- (void)deleteCandidates;
- (void)deleteDonationTime;
- (void)deleteDonationTrigger;
- (void)deleteIfSessionId;
- (void)deleteTuple;
- (void)deleteWasTupleDonated;

@end
