@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSSortedScore : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *sortedScoreFinal;
@property (nonatomic) BOOL hasSortedScoreFinal;
@property (copy, nonatomic) NSString *sortedScorelinearCombiner;
@property (nonatomic) BOOL hasSortedScorelinearCombiner;
@property (copy, nonatomic) NSString *sortedScoreModelFinal;
@property (nonatomic) BOOL hasSortedScoreModelFinal;
@property (copy, nonatomic) NSString *sortedScoreStage2;
@property (nonatomic) BOOL hasSortedScoreStage2;
@property (copy, nonatomic) NSString *sortedScoreBoosted;
@property (nonatomic) BOOL hasSortedScoreBoosted;
@property (copy, nonatomic) NSString *sortedScoreKnockOut;
@property (nonatomic) BOOL hasSortedScoreKnockOut;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteSortedScorelinearCombiner;
- (void)deleteSortedScoreBoosted;
- (void)deleteSortedScoreFinal;
- (void)deleteSortedScoreKnockOut;
- (void)deleteSortedScoreModelFinal;
- (void)deleteSortedScoreStage2;

@end
