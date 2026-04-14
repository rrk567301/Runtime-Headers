@class NLXSchemaCDMRepetitionResult, NSArray, NSData, SISchemaUUID, NLXSchemaCDMParser, NLXSchemaCDMCorrectionOutcome;

@interface NLXSchemaCDMUserParse : SISchemaInstrumentationMessage {
    struct { unsigned char probability : 1; unsigned char comparableProbability : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *id;
@property (nonatomic) BOOL hasId;
@property (copy, nonatomic) NSArray *userDialogActs;
@property (nonatomic) double probability;
@property (nonatomic) BOOL hasProbability;
@property (retain, nonatomic) NLXSchemaCDMRepetitionResult *repetitionResult;
@property (nonatomic) BOOL hasRepetitionResult;
@property (retain, nonatomic) NLXSchemaCDMParser *parser;
@property (nonatomic) BOOL hasParser;
@property (nonatomic) double comparableProbability;
@property (nonatomic) BOOL hasComparableProbability;
@property (retain, nonatomic) NLXSchemaCDMCorrectionOutcome *correctionOutcome;
@property (nonatomic) BOOL hasCorrectionOutcome;
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
- (void)addUserDialogActs:(id)a0;
- (void)clearUserDialogActs;
- (void)deleteComparableProbability;
- (void)deleteCorrectionOutcome;
- (void)deleteId;
- (void)deleteParser;
- (void)deleteProbability;
- (void)deleteRepetitionResult;
- (void)deleteUserDialogActs;
- (id)userDialogActsAtIndex:(unsigned long long)a0;
- (unsigned long long)userDialogActsCount;

@end
