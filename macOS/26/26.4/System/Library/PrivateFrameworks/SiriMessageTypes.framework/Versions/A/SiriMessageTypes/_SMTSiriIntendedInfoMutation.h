@class NSString, SMTSiriIntendedInfo, NSNumber;

@interface _SMTSiriIntendedInfoMutation : NSObject <SMTSiriIntendedInfoMutating> {
    SMTSiriIntendedInfo *_base;
    float _odldScore;
    float _aftmScore;
    float _spkrIdScore;
    float _lrnnScore;
    float _checkerScore;
    float _lrnnThreshold;
    float _lrnnScale;
    float _lrnnOffset;
    BOOL _isGazeSignalPresent;
    NSNumber *_invocationType;
    float _conversationalOdldScore;
    float _spkrIdThreshold;
    float _neuralCombinerScore;
    float _neuralCombinerThreshold;
    long long _neuralCombinerMitigationDecision;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasOdldScore : 1; unsigned char hasAftmScore : 1; unsigned char hasSpkrIdScore : 1; unsigned char hasLrnnScore : 1; unsigned char hasCheckerScore : 1; unsigned char hasInvocationType : 1; unsigned char hasLrnnThreshold : 1; unsigned char hasLrnnScale : 1; unsigned char hasLrnnOffset : 1; unsigned char hasIsGazeSignalPresent : 1; unsigned char hasConversationalOdldScore : 1; unsigned char hasSpkrIdThreshold : 1; unsigned char hasNeuralCombinerScore : 1; unsigned char hasNeuralCombinerThreshold : 1; unsigned char hasNeuralCombinerMitigationDecision : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDirty;
- (id)initWithBase:(id)a0;
- (void).cxx_destruct;
- (void)setAftmScore:(float)a0;
- (void)setConversationalOdldScore:(float)a0;
- (void)setInvocationType:(id)a0;
- (void)setLrnnScore:(float)a0;
- (void)setNeuralCombinerScore:(float)a0;
- (void)setNeuralCombinerThreshold:(float)a0;
- (void)setOdldScore:(float)a0;
- (void)setNeuralCombinerMitigationDecision:(long long)a0;
- (void)setCheckerScore:(float)a0;
- (void)setLrnnThreshold:(float)a0;
- (void)setSpkrIdScore:(float)a0;
- (float)getCheckerScore;
- (float)getAftmScore;
- (float)getConversationalOdldScore;
- (BOOL)getGazeSignal;
- (id)getInvocationType;
- (float)getLrnnOffset;
- (float)getLrnnScale;
- (float)getLrnnScore;
- (float)getLrnnThreshold;
- (long long)getNeuralCombinerMitigationDecision;
- (float)getNeuralCombinerScore;
- (float)getNeuralCombinerThreshold;
- (float)getOdldScore;
- (float)getSpkrIdScore;
- (float)getSpkrIdThreshold;
- (void)setGazeSignal:(BOOL)a0;
- (void)setLrnnOffset:(float)a0;
- (void)setLrnnScale:(float)a0;
- (void)setSpkrIdThreshold:(float)a0;

@end
