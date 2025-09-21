@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSSortedScore : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *sortedScoreFinal;
@property (nonatomic) char hasSortedScoreFinal;
@property (copy, nonatomic) NSString *sortedScorelinearCombiner;
@property (nonatomic) char hasSortedScorelinearCombiner;
@property (copy, nonatomic) NSString *sortedScoreModelFinal;
@property (nonatomic) char hasSortedScoreModelFinal;
@property (copy, nonatomic) NSString *sortedScoreStage2;
@property (nonatomic) char hasSortedScoreStage2;
@property (copy, nonatomic) NSString *sortedScoreBoosted;
@property (nonatomic) char hasSortedScoreBoosted;
@property (copy, nonatomic) NSString *sortedScoreKnockOut;
@property (nonatomic) char hasSortedScoreKnockOut;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSortedScorelinearCombiner;
- (void)deleteSortedScoreBoosted;
- (void)deleteSortedScoreFinal;
- (void)deleteSortedScoreKnockOut;
- (void)deleteSortedScoreModelFinal;
- (void)deleteSortedScoreStage2;
- (id)suppressMessageUnderConditions;

@end
