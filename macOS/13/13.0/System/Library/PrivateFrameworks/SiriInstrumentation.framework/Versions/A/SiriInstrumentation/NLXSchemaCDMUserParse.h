@class NLXSchemaCDMRepetitionResult, NSArray, NSData, SISchemaUUID, NLXSchemaCDMParser;

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
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteProbability;
- (void)deleteId;
- (void)clearUserDialogActs;
- (void)deleteUserDialogActs;
- (void)addUserDialogActs:(id)a0;
- (unsigned long long)userDialogActsCount;
- (id)userDialogActsAtIndex:(unsigned long long)a0;
- (void)deleteRepetitionResult;
- (void)deleteParser;
- (void)deleteComparableProbability;

@end
