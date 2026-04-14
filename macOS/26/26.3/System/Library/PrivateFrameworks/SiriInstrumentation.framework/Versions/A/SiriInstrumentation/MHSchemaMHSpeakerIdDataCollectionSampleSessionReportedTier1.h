@class MHSchemaMHSpeakerIdDataCollectionEnrollmentDataReportedTier1, NSString, NSData, MHSchemaMHSpeakerIdDataCollectionSelectedClockSessionInfoTier1;

@interface MHSchemaMHSpeakerIdDataCollectionSampleSessionReportedTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) MHSchemaMHSpeakerIdDataCollectionEnrollmentDataReportedTier1 *enrollmentData;
@property (nonatomic) BOOL hasEnrollmentData;
@property (retain, nonatomic) MHSchemaMHSpeakerIdDataCollectionSelectedClockSessionInfoTier1 *clockSessionInfo;
@property (nonatomic) BOOL hasClockSessionInfo;
@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) BOOL hasSystemBuild;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteClockSessionInfo;
- (void)deleteEnrollmentData;
- (void)deleteSystemBuild;

@end
