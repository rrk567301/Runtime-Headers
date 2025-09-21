@class DODMLASRSchemaDODMLASRAlignmentInfo, NSData;

@interface DODMLASRSchemaDODMLASRFullPayloadCorrectionExperimentPostAnalysis : SISchemaInstrumentationMessage {
    struct { unsigned char trueCorrections : 1; unsigned char trueRegressions : 1; } _has;
}

@property (retain, nonatomic) DODMLASRSchemaDODMLASRAlignmentInfo *asrOutputToUserEdit;
@property (nonatomic) char hasAsrOutputToUserEdit;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRAlignmentInfo *asrFullPayloadCorrectedToUserEdit;
@property (nonatomic) char hasAsrFullPayloadCorrectedToUserEdit;
@property (nonatomic) unsigned int trueCorrections;
@property (nonatomic) char hasTrueCorrections;
@property (nonatomic) unsigned int trueRegressions;
@property (nonatomic) char hasTrueRegressions;
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
- (void)deleteAsrFullPayloadCorrectedToUserEdit;
- (void)deleteAsrOutputToUserEdit;
- (void)deleteTrueCorrections;
- (void)deleteTrueRegressions;
- (id)suppressMessageUnderConditions;

@end
