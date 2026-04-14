@class NLGSchemaNLGScoredDialog, NLGSchemaNLGDialogScorer, NSData, NLGSchemaNLGDialogCandidateStatistics;

@interface NLGSchemaNLGScoredDialogSelected : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLGSchemaNLGDialogScorer *dialogScorer;
@property (nonatomic) BOOL hasDialogScorer;
@property (retain, nonatomic) NLGSchemaNLGDialogCandidateStatistics *dialogCandidateStatistics;
@property (nonatomic) BOOL hasDialogCandidateStatistics;
@property (retain, nonatomic) NLGSchemaNLGScoredDialog *selectedScoredDialog;
@property (nonatomic) BOOL hasSelectedScoredDialog;
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
- (void)deleteDialogCandidateStatistics;
- (void)deleteDialogScorer;
- (void)deleteSelectedScoredDialog;

@end
