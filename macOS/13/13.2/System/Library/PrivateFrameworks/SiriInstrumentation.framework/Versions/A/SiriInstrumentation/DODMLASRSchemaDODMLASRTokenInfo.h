@class NSArray, NSData, ASRSchemaASRToken;

@interface DODMLASRSchemaDODMLASRTokenInfo : SISchemaInstrumentationMessage {
    struct { unsigned char acousticCost : 1; unsigned char silenceAcousticCost : 1; } _has;
}

@property (retain, nonatomic) ASRSchemaASRToken *token;
@property (nonatomic) BOOL hasToken;
@property (nonatomic) float acousticCost;
@property (nonatomic) BOOL hasAcousticCost;
@property (nonatomic) float silenceAcousticCost;
@property (nonatomic) BOOL hasSilenceAcousticCost;
@property (copy, nonatomic) NSArray *numBackoffs;
@property (copy, nonatomic) NSArray *languageModelCosts;
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
- (void)deleteAcousticCost;
- (void)deleteToken;
- (void)deleteSilenceAcousticCost;
- (void)clearNumBackoffs;
- (void)deleteNumBackoffs;
- (void)addNumBackoffs:(unsigned int)a0;
- (unsigned long long)numBackoffsCount;
- (unsigned int)numBackoffsAtIndex:(unsigned long long)a0;
- (void)clearLanguageModelCosts;
- (void)deleteLanguageModelCosts;
- (void)addLanguageModelCosts:(float)a0;
- (unsigned long long)languageModelCostsCount;
- (float)languageModelCostsAtIndex:(unsigned long long)a0;

@end
