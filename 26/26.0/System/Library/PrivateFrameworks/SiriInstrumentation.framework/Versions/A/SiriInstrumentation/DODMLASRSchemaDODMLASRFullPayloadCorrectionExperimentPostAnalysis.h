@class DODMLASRSchemaDODMLASRAlignmentInfo, NSData;

@interface DODMLASRSchemaDODMLASRFullPayloadCorrectionExperimentPostAnalysis : SISchemaInstrumentationMessage {
    struct { unsigned char trueCorrections : 1; unsigned char trueRegressions : 1; } _has;
}

@property (retain, nonatomic) DODMLASRSchemaDODMLASRAlignmentInfo *asrOutputToUserEdit;
@property (nonatomic) BOOL hasAsrOutputToUserEdit;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRAlignmentInfo *asrFullPayloadCorrectedToUserEdit;
@property (nonatomic) BOOL hasAsrFullPayloadCorrectedToUserEdit;
@property (nonatomic) unsigned int trueCorrections;
@property (nonatomic) BOOL hasTrueCorrections;
@property (nonatomic) unsigned int trueRegressions;
@property (nonatomic) BOOL hasTrueRegressions;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteAsrFullPayloadCorrectedToUserEdit;
- (void)deleteAsrOutputToUserEdit;
- (void)deleteTrueCorrections;
- (void)deleteTrueRegressions;

@end
