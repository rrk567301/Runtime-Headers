@class INFERENCESchemaINFERENCEEuclidTrialParameters, INFERENCESchemaINFERENCEEuclidScoreStatistics, NSArray, NSData, SISchemaUUID;

@interface INFERENCESchemaINFERENCEEuclidDebugMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char isLmePresent : 1; unsigned char numRowsVectorDb : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *templateId;
@property (nonatomic) char hasTemplateId;
@property (retain, nonatomic) INFERENCESchemaINFERENCEEuclidScoreStatistics *euclidScoreStatistics;
@property (nonatomic) char hasEuclidScoreStatistics;
@property (retain, nonatomic) INFERENCESchemaINFERENCEEuclidTrialParameters *euclidTrialParameters;
@property (nonatomic) char hasEuclidTrialParameters;
@property (copy, nonatomic) NSArray *euclidEntityTypeMatcheds;
@property (nonatomic) char isLmePresent;
@property (nonatomic) char hasIsLmePresent;
@property (copy, nonatomic) NSArray *tokenWiseAsrConfidences;
@property (nonatomic) unsigned int numRowsVectorDb;
@property (nonatomic) char hasNumRowsVectorDb;
@property (copy, nonatomic) NSArray *matchedTemplateIds;
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
- (int)euclidEntityTypeMatchedAtIndex:(unsigned long long)a0;
- (void)addEuclidEntityTypeMatched:(int)a0;
- (void)addMatchedTemplateIds:(id)a0;
- (void)addTokenWiseAsrConfidence:(int)a0;
- (void)clearEuclidEntityTypeMatched;
- (void)clearMatchedTemplateIds;
- (void)clearTokenWiseAsrConfidence;
- (void)deleteEuclidEntityTypeMatched;
- (void)deleteEuclidScoreStatistics;
- (void)deleteEuclidTrialParameters;
- (void)deleteIsLmePresent;
- (void)deleteMatchedTemplateIds;
- (void)deleteNumRowsVectorDb;
- (void)deleteTemplateId;
- (void)deleteTokenWiseAsrConfidence;
- (unsigned long long)euclidEntityTypeMatchedCount;
- (id)matchedTemplateIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)matchedTemplateIdsCount;
- (id)suppressMessageUnderConditions;
- (int)tokenWiseAsrConfidenceAtIndex:(unsigned long long)a0;
- (unsigned long long)tokenWiseAsrConfidenceCount;

@end
