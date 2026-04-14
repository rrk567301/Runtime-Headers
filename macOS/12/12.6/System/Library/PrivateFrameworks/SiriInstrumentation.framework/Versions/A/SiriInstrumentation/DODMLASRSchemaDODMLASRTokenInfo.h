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
- (void)deleteAcousticCost;
- (void)clearNumBackoffs;
- (void)clearLanguageModelCosts;
- (void)addNumBackoffs:(unsigned int)a0;
- (void)addLanguageModelCosts:(float)a0;
- (void)deleteToken;
- (void)deleteSilenceAcousticCost;
- (void)deleteNumBackoffs;
- (unsigned long long)numBackoffsCount;
- (unsigned int)numBackoffsAtIndex:(unsigned long long)a0;
- (void)deleteLanguageModelCosts;
- (unsigned long long)languageModelCostsCount;
- (float)languageModelCostsAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
