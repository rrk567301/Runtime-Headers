@class NLGSchemaNLGScoredDialog, NLGSchemaNLGDialogScorer, NSData, NLGSchemaNLGDialogCandidateStatistics;

@interface NLGSchemaNLGScoredDialogSelected : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLGSchemaNLGDialogScorer *dialogScorer;
@property (nonatomic) char hasDialogScorer;
@property (retain, nonatomic) NLGSchemaNLGDialogCandidateStatistics *dialogCandidateStatistics;
@property (nonatomic) char hasDialogCandidateStatistics;
@property (retain, nonatomic) NLGSchemaNLGScoredDialog *selectedScoredDialog;
@property (nonatomic) char hasSelectedScoredDialog;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDialogCandidateStatistics;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDialogScorer;
- (void)deleteSelectedScoredDialog;
- (id)suppressMessageUnderConditions;

@end
