@class NSArray, NSString, NSData;

@interface CNVSchemaCNVDisambiguationDialogGenerated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actionCandidateIds;
@property (copy, nonatomic) NSString *dialogType;
@property (nonatomic) BOOL hasDialogType;
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
- (id)actionCandidateIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)actionCandidateIdsCount;
- (void)addActionCandidateIds:(id)a0;
- (void)clearActionCandidateIds;
- (void)deleteActionCandidateIds;
- (void)deleteDialogType;

@end
