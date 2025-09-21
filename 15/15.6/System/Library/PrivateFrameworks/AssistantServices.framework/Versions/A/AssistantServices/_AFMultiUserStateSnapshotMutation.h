@class NSString, NSArray, AFMultiUserStateSnapshot, NSNumber;

@interface _AFMultiUserStateSnapshotMutation : NSObject <AFMultiUserStateSnapshotMutating> {
    AFMultiUserStateSnapshot *_base;
    NSNumber *_vtSatScore;
    NSArray *_confidenceScores;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasVtSatScore : 1; unsigned char hasConfidenceScores : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)isDirty;
- (id)getConfidenceScores;
- (id)getVtSatScore;
- (id)initWithBase:(id)a0;
- (void)setConfidenceScores:(id)a0;
- (void)setVtSatScore:(id)a0;

@end
