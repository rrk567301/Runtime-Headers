@class NSString, AFMyriadGoodnessScoreOverrideState;

@interface _AFMyriadGoodnessScoreOverrideStateMutation : NSObject <AFMyriadGoodnessScoreOverrideStateMutating> {
    AFMyriadGoodnessScoreOverrideState *_base;
    long long _overrideOption;
    NSString *_reason;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasOverrideOption : 1; unsigned char hasReason : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setReason:(id)a0;
- (BOOL)isDirty;
- (id)initWithBase:(id)a0;
- (id)getReason;
- (void)setOverrideOption:(long long)a0;
- (long long)getOverrideOption;

@end
