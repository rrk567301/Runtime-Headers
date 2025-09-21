@class NLXSchemaCDMRepetitionResult, NSArray, NSData, SISchemaUUID, NLXSchemaCDMParser, NLXSchemaCDMCorrectionOutcome;

@interface NLXSchemaCDMUserParse : SISchemaInstrumentationMessage {
    struct { unsigned char probability : 1; unsigned char comparableProbability : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *id;
@property (nonatomic) char hasId;
@property (copy, nonatomic) NSArray *userDialogActs;
@property (nonatomic) double probability;
@property (nonatomic) char hasProbability;
@property (retain, nonatomic) NLXSchemaCDMRepetitionResult *repetitionResult;
@property (nonatomic) char hasRepetitionResult;
@property (retain, nonatomic) NLXSchemaCDMParser *parser;
@property (nonatomic) char hasParser;
@property (nonatomic) double comparableProbability;
@property (nonatomic) char hasComparableProbability;
@property (retain, nonatomic) NLXSchemaCDMCorrectionOutcome *correctionOutcome;
@property (nonatomic) char hasCorrectionOutcome;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addUserDialogActs:(id)a0;
- (void)clearUserDialogActs;
- (void)deleteComparableProbability;
- (void)deleteCorrectionOutcome;
- (void)deleteId;
- (void)deleteParser;
- (void)deleteProbability;
- (void)deleteRepetitionResult;
- (void)deleteUserDialogActs;
- (id)suppressMessageUnderConditions;
- (id)userDialogActsAtIndex:(unsigned long long)a0;
- (unsigned long long)userDialogActsCount;

@end
