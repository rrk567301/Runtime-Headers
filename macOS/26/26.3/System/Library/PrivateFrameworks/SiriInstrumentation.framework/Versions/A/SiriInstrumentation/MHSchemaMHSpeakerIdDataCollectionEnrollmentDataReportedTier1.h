@class NSString, NSArray, NSData, SISchemaISOLocale;

@interface MHSchemaMHSpeakerIdDataCollectionEnrollmentDataReportedTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaISOLocale *siriInputLocale;
@property (nonatomic) BOOL hasSiriInputLocale;
@property (copy, nonatomic) NSString *deviceType;
@property (nonatomic) BOOL hasDeviceType;
@property (copy, nonatomic) NSString *productVersion;
@property (nonatomic) BOOL hasProductVersion;
@property (copy, nonatomic) NSArray *enrollmentUtterances;
@property (copy, nonatomic) NSData *enrollmentDataDedupeHashBytes;
@property (nonatomic) BOOL hasEnrollmentDataDedupeHashBytes;
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
- (void)addEnrollmentUtterances:(id)a0;
- (void)clearEnrollmentUtterances;
- (void)deleteDeviceType;
- (void)deleteEnrollmentDataDedupeHashBytes;
- (void)deleteEnrollmentUtterances;
- (void)deleteProductVersion;
- (void)deleteSiriInputLocale;
- (id)enrollmentUtterancesAtIndex:(unsigned long long)a0;
- (unsigned long long)enrollmentUtterancesCount;

@end
