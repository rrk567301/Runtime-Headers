@class HDCloudSyncTarget, HDCloudSyncSequenceRecord, HDCloudSyncSequenceState;

@interface HDCloudSyncStartSequenceOperation : HDCloudSyncSynchronousOperation {
    HDCloudSyncTarget *_target;
    HDCloudSyncSequenceRecord *_sequenceRecord;
    HDCloudSyncSequenceRecord *_replacedSequenceRecord;
    char _shouldClearRebaselineDeadline;
}

@property (readonly, copy, nonatomic) HDCloudSyncSequenceState *sequenceState;

- (void).cxx_destruct;
- (char)performWithError:(id *)a0;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 target:(id)a2 sequence:(id)a3 replacingSequence:(id)a4 shouldClearRebaselineDeadline:(char)a5;

@end
