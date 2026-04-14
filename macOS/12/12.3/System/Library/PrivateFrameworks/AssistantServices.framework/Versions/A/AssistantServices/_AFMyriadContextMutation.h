@class NSString, AFMyriadContext, AFMyriadGoodnessScoreOverrideState, AFMyriadPerceptualAudioHash;

@interface _AFMyriadContextMutation : NSObject <AFMyriadContextMutating> {
    AFMyriadContext *_baseModel;
    unsigned long long _timestamp;
    AFMyriadPerceptualAudioHash *_perceptualAudioHash;
    AFMyriadGoodnessScoreOverrideState *_overrideState;
    long long _activationSource;
    unsigned long long _activationExpirationTime;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasTimestamp : 1; unsigned char hasPerceptualAudioHash : 1; unsigned char hasOverrideState : 1; unsigned char hasActivationSource : 1; unsigned char hasActivationExpirationTime : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setTimestamp:(unsigned long long)a0;
- (void)setPerceptualAudioHash:(id)a0;
- (void)setOverrideState:(id)a0;
- (void)setActivationSource:(long long)a0;
- (void)setActivationExpirationTime:(unsigned long long)a0;
- (id)initWithBaseModel:(id)a0;
- (id)generate;

@end
