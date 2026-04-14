@class NSString, SMTSpeechDetectionUpdate;

@interface _SMTSpeechDetectionUpdateMutation : NSObject <SMTSpeechDetectionUpdateMutating> {
    SMTSpeechDetectionUpdate *_base;
    BOOL _speechDetected;
    NSString *_lastTRPCandidateId;
    long long _processedAudioDurationMs;
    long long _trailingSilenceDurationMs;
    unsigned long long _wordCount;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasSpeechDetected : 1; unsigned char hasLastTRPCandidateId : 1; unsigned char hasProcessedAudioDurationMs : 1; unsigned char hasTrailingSilenceDurationMs : 1; unsigned char hasWordCount : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void).cxx_destruct;
- (void)setWordCount:(unsigned long long)a0;
- (void)setProcessedAudioDurationMs:(long long)a0;
- (long long)getProcessedAudioDurationMs;
- (void)setLastTRPCandidateId:(id)a0;
- (id)getLastTRPCandidateId;
- (BOOL)getSpeechDetected;
- (long long)getTrailingSilenceDurationMs;
- (unsigned long long)getWordCount;
- (void)setSpeechDetected:(BOOL)a0;
- (void)setTrailingSilenceDurationMs:(long long)a0;

@end
