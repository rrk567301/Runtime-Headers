@interface AFAggregator : NSObject {
    double _startTime;
    BOOL _sessionIsRetrying;
    BOOL _retryPrefersWWAN;
}

@property (nonatomic) unsigned long long connectionType;
@property (nonatomic) BOOL hasActiveRequest;

+ (void)logRequestCompletedWithDuration:(double)a0;
+ (void)missedAppContextForRequest;
+ (void)missedAlertContextForRequest;
+ (void)logRequestCancelAfterSeconds:(double)a0;
+ (void)logSiriInvokedVia:(long long)a0;
+ (void)logSiriQuickStopAction:(unsigned long long)a0;
+ (void)logSiriMediaVolumeAction:(long long)a0;
+ (void)logSiriPausedMedia;
+ (id)_fullAggDKeyWithPrefix:(id)a0 error:(id)a1;
+ (void)logRequestLaunchedApp;
+ (void)logSiriSpeechRequestStarted;
+ (void)logSiriOtherRequestStarted;
+ (void)logSiriRequestFailedWithError:(id)a0;
+ (void)logSiriRequestSucceeded;
+ (void)logSiriRequestCancelled;
+ (void)logDictationStarted;
+ (void)logDictationFailedWithError:(id)a0;
+ (void)logDictationSucceeded;
+ (void)logDictationCancelled;
+ (void)logDictationFollowedByContinueOccurredForLanguage:(id)a0;
+ (void)logDictationFollowedByKeyboardInputOccurredForLanguage:(id)a0;
+ (void)logDictationFollowedByKeyboardDeleteOccurredForLanguage:(id)a0;
+ (void)logKeyboardInputFollowedByContinueOccurredForLanguage:(id)a0;
+ (void)logUILockCanceledVTActivation;
+ (void)logCreateAssistant;
+ (void)logLoadAssistant;
+ (void)logPingTimeout;
+ (void)logEnabledState:(unsigned long long)a0;
+ (void)logLocalRecognitionAssetEvictedForLanguage:(id)a0;
+ (void)logLocalSpeechStartedWithDuration:(double)a0;
+ (void)logLocalFinalSpeechRecognitionWithDuration:(double)a0;
+ (void)logLocalRecognitionLoadedForLanguage:(id)a0 duration:(double)a1;
+ (void)logLocalRecognitionWonForLanguage:(id)a0;
+ (void)logLocalRecognitionLostForLanguage:(id)a0;
+ (void)logDESRecordingForLanguage:(id)a0 error:(id)a1;
+ (void)logDESEvaluationForLanguage:(id)a0 error:(id)a1;
+ (void)logCDMAssetEvictedForAssetType:(id)a0 language:(id)a1;
+ (void)noteConnectedToCarPlayHeadunit;
+ (void)noteSuccessOfRequest:(id)a0 inCar:(BOOL)a1;
+ (void)logTimeToBeepWithDuration:(double)a0;
+ (void)logHomeButtonPressToActivationDuration:(double)a0;
+ (void)logStarkGatekeeperDismissedManuallyForType:(unsigned long long)a0;
+ (void)logStarkGatekeeperAppearedForType:(unsigned long long)a0;
+ (id)_stringForGatekeeperType:(unsigned long long)a0;

- (void)recordSuccessForConnectionType:(unsigned long long)a0 isWarm:(BOOL)a1 forTimeInterval:(double)a2;
- (void)recordFailure:(int)a0 forConnectionType:(unsigned long long)a1;
- (void)recordSessionRetrySuccess;
- (void)connectionDidFail;
- (void)connectionDidDrop;
- (void)beginSessionRetryPreferringWWAN:(BOOL)a0;
- (void)startWaitingForSpeechResponse;
- (void)speechResponseReceived;
- (void)speechResponseFailure;

@end
