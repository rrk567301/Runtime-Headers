@class NSDictionary;

@interface ENDifferentialPrivacyManager : NSObject

@property (readonly, copy, nonatomic) NSDictionary *metadata;

+ (unsigned short)userRiskScoreForExposureDetectionSummary:(id)a0;
+ (id)hashForServerExposureConfiguration:(id)a0;

- (void).cxx_destruct;
- (id)initWithServerConfiguration:(id)a0 serverExposureConfiguration:(id)a1;
- (void)updatedServerConfiguration:(id)a0 serverExposureConfiguration:(id)a1;
- (void)reportUserRiskScoreWithSummary:(id)a0;
- (void)reportUserRiskParameters:(id)a0;
- (void)reportUserBeaconCount:(id)a0;
- (void)reportUserExposureNotificationWithClassificationIndex:(unsigned char)a0 daysDelay:(unsigned char)a1;
- (void)reportUserExposureNotificationTapped:(BOOL)a0 classificationIndex:(unsigned char)a1;
- (void)reportUserCodeVerified:(unsigned char)a0 reportType:(unsigned int)a1;
- (void)reportUserKeysUploaded:(unsigned char)a0 reportType:(unsigned int)a1;
- (void)reportUserDiagnosedVaccineStatus:(id)a0;

@end
