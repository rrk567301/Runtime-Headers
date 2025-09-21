@class NSString, AFSiriActivationResult, NSError;

@interface _AFSiriActivationResultMutation : NSObject <AFSiriActivationResultMutating> {
    AFSiriActivationResult *_base;
    long long _actionType;
    NSError *_error;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasActionType : 1; unsigned char hasError : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setError:(id)a0;
- (char)isDirty;
- (void)setActionType:(long long)a0;
- (long long)getActionType;
- (id)getError;
- (id)initWithBase:(id)a0;

@end
