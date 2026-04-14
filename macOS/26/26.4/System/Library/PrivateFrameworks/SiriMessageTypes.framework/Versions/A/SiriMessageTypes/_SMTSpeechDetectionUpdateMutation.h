@class NSString, SMTSpeechDetectionUpdate, SMTSpeechDetectionMetadata;

@interface _SMTSpeechDetectionUpdateMutation : NSObject <SMTSpeechDetectionUpdateMutating> {
    SMTSpeechDetectionUpdate *_base;
    BOOL _speechDetected;
    BOOL _isSameUser;
    BOOL _isInvocationUser;
    BOOL _isManualMode;
    NSString *_lastTRPCandidateId;
    long long _processedAudioDurationMs;
    long long _trailingSilenceDurationMs;
    unsigned long long _wordCount;
    SMTSpeechDetectionMetadata *_speechMetadata;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasSpeechDetected : 1; unsigned char hasIsSameUser : 1; unsigned char hasIsInvocationUser : 1; unsigned char hasLastTRPCandidateId : 1; unsigned char hasProcessedAudioDurationMs : 1; unsigned char hasTrailingSilenceDurationMs : 1; unsigned char hasWordCount : 1; unsigned char hasSpeechMetadata : 1; unsigned char hasIsManualMode : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDirty;
- (id)initWithBase:(id)a0;
- (void).cxx_destruct;
- (void)setWordCount:(unsigned long long)a0;
- (void)setProcessedAudioDurationMs:(long long)a0;
- (void)setSpeechMetadata:(id)a0;
- (long long)getProcessedAudioDurationMs;
- (void)setLastTRPCandidateId:(id)a0;
- (void)setIsInvocationUser:(BOOL)a0;
- (void)setIsManualMode:(BOOL)a0;
- (void)setIsSameUser:(BOOL)a0;
- (void)setSpeechDetected:(BOOL)a0;
- (BOOL)getIsManualMode;
- (BOOL)getIsInvocationUser;
- (BOOL)getIsSameUser;
- (id)getLastTRPCandidateId;
- (BOOL)getSpeechDetected;
- (id)getSpeechMetadata;
- (long long)getTrailingSilenceDurationMs;
- (unsigned long long)getWordCount;
- (void)setTrailingSilenceDurationMs:(long long)a0;

@end
