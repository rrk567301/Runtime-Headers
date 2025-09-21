@class NSString, NSUUID;

@interface CSVTUISelfLoggingDigitalZeroReporter : NSObject <CSDigitalZeroReporting> {
    NSUUID *_siriSetupID;
    int _pageNumber;
    NSString *_phId;
    int _maxNumContinuousZeros;
    int _maxNumAllowedContinuousZeros;
    char _isMaxNumContinuousZerosOverThreshold;
    NSString *_locale;
    NSString *_vtAssetConfigVersion;
    int _sessionStatus;
    char _didDetectSpeechStart;
    char _didUseTwoPassDetector;
    char _didFirstPassTrigger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)logDigitalZeroDetectionComplete;
- (int)_getStageStatusFromTrainingManagerSessionStatus:(int)a0;
- (char)digitalZeroDetected;
- (id)initWithSiriSetupID:(id)a0 PageNumber:(int)a1 withPhId:(id)a2 withLocale:(id)a3 withVTAssetConfigVersion:(id)a4 withSessionStatus:(int)a5 didDetectSpeechStart:(char)a6 didUseTwoPassDetector:(char)a7 didFirstPassTrigger:(char)a8;
- (void)reportDigitalZerosWithAudioZeroRun:(float)a0;

@end
