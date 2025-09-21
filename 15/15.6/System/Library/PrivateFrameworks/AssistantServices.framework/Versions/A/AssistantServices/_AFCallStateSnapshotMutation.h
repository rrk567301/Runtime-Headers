@class NSString, AFCallStateSnapshot;

@interface _AFCallStateSnapshotMutation : NSObject <AFCallStateSnapshotMutating> {
    AFCallStateSnapshot *_base;
    unsigned long long _callState;
    char _onSpeaker;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasCallState : 1; unsigned char hasOnSpeaker : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)isDirty;
- (void)setCallState:(unsigned long long)a0;
- (unsigned long long)getCallState;
- (char)getOnSpeaker;
- (id)initWithBase:(id)a0;
- (void)setOnSpeaker:(char)a0;

@end
