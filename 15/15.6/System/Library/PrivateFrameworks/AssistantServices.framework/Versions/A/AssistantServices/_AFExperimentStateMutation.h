@class NSString, AFExperimentState, NSDate;

@interface _AFExperimentStateMutation : NSObject <AFExperimentStateMutating> {
    AFExperimentState *_base;
    NSDate *_lastSyncDate;
    char _didEnd;
    NSString *_endingGroupIdentifier;
    NSString *_version;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasLastSyncDate : 1; unsigned char hasDidEnd : 1; unsigned char hasEndingGroupIdentifier : 1; unsigned char hasVersion : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setVersion:(id)a0;
- (char)isDirty;
- (id)getVersion;
- (void)setLastSyncDate:(id)a0;
- (void)setDidEnd:(char)a0;
- (id)getLastSyncDate;
- (char)getDidEnd;
- (id)getEndingGroupIdentifier;
- (id)initWithBase:(id)a0;
- (void)setEndingGroupIdentifier:(id)a0;

@end
