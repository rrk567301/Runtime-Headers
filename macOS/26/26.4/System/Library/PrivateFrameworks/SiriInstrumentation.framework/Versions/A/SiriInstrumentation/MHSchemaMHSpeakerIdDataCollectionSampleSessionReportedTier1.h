@class MHSchemaMHSpeakerIdDataCollectionEnrollmentDataReportedTier1, NSString, NSData, MHSchemaMHSpeakerIdDataCollectionSelectedClockSessionInfoTier1;

@interface MHSchemaMHSpeakerIdDataCollectionSampleSessionReportedTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) MHSchemaMHSpeakerIdDataCollectionEnrollmentDataReportedTier1 *enrollmentData;
@property (nonatomic) BOOL hasEnrollmentData;
@property (retain, nonatomic) MHSchemaMHSpeakerIdDataCollectionSelectedClockSessionInfoTier1 *clockSessionInfo;
@property (nonatomic) BOOL hasClockSessionInfo;
@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) BOOL hasSystemBuild;
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
- (void)deleteClockSessionInfo;
- (void)deleteEnrollmentData;
- (void)deleteSystemBuild;

@end
