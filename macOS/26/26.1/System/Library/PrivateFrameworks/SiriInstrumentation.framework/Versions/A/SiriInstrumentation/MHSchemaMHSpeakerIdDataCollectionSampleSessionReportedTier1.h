@class MHSchemaMHSpeakerIdDataCollectionEnrollmentDataReportedTier1, NSString, NSData, MHSchemaMHSpeakerIdDataCollectionSelectedClockSessionInfoTier1;

@interface MHSchemaMHSpeakerIdDataCollectionSampleSessionReportedTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) MHSchemaMHSpeakerIdDataCollectionEnrollmentDataReportedTier1 *enrollmentData;
@property (nonatomic) BOOL hasEnrollmentData;
@property (retain, nonatomic) MHSchemaMHSpeakerIdDataCollectionSelectedClockSessionInfoTier1 *clockSessionInfo;
@property (nonatomic) BOOL hasClockSessionInfo;
@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) BOOL hasSystemBuild;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteClockSessionInfo;
- (void)deleteEnrollmentData;
- (void)deleteSystemBuild;

@end
