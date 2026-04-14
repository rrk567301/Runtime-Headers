@class NSString;

@interface LBLocalSpeechDetectionUpdatesBuilder : NSObject {
    NSString *_lastTRPCandidateId;
    BOOL _speechDetected;
    BOOL _isSameUser;
    BOOL _isInvocationUser;
    BOOL _didDetectPostVTSilence;
    BOOL _didTRPArrivalTimeout;
    BOOL _noSpeechTokensDetectedInRequest;
    BOOL _minSpeechEventThresholdMet;
    BOOL _longFormSpeechEventThresholdMet;
    BOOL _maxSpeechEventThresholdMet;
    BOOL _noTRPArrivalThresholdMet;
    BOOL _isManualMode;
    BOOL _mitigationTrailingSilenceThresholdMet;
    long long _processedAudioDurationMs;
}

- (id)build;
- (void).cxx_destruct;
- (id)init;
- (id)initWithUpdates:(id)a0;
- (id)setProcessedAudioDurationMs:(long long)a0;
- (id)setLastTRPCandidateId:(id)a0;
- (id)setDidDetectPostVTSilence:(BOOL)a0;
- (id)setDidTRPArrivalTimeout:(BOOL)a0;
- (id)setIsInvocationUser:(BOOL)a0;
- (id)setIsManualMode:(BOOL)a0;
- (id)setIsSameUser:(BOOL)a0;
- (id)setLongFormSpeechEventThresholdMet:(BOOL)a0;
- (id)setMaxSpeechEventThresholdMet:(BOOL)a0;
- (id)setMinSpeechEventThresholdMet:(BOOL)a0;
- (id)setMitigationTrailingSilenceThresholdMet:(BOOL)a0;
- (id)setNoSpeechTokensDetectedInRequest:(BOOL)a0;
- (id)setNoTRPArrivalThresholdMet:(BOOL)a0;
- (id)setSpeechDetected:(BOOL)a0;

@end
