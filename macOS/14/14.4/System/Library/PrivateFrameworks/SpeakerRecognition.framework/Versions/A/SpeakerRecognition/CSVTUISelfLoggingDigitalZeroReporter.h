@class NSString, NSUUID;

@interface CSVTUISelfLoggingDigitalZeroReporter : NSObject <CSDigitalZeroReporting> {
    NSUUID *_siriSetupID;
    int _pageNumber;
    NSString *_phId;
    int _maxNumContinuousZeros;
    int _maxNumAllowedContinuousZeros;
    BOOL _isMaxNumContinuousZerosOverThreshold;
    NSString *_locale;
    NSString *_vtAssetConfigVersion;
    int _sessionStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)logDigitalZeroDetectionComplete;
- (int)_getStageStatusFromTrainingManagerSessionStatus:(int)a0;
- (BOOL)digitalZeroDetected;
- (id)initWithSiriSetupID:(id)a0 PageNumber:(int)a1 withPhId:(id)a2 withLocale:(id)a3 withVTAssetConfigVersion:(id)a4 withSessionStatus:(int)a5;
- (void)reportDigitalZerosWithAudioZeroRun:(float)a0;

@end
