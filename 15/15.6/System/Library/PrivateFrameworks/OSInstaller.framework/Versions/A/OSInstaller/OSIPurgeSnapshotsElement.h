@interface OSIPurgeSnapshotsElement : OSIInstallQueueElement

- (id)initWithOptions:(id)a0;
- (id)operationName;
- (char)runReturningError:(id *)a0;
- (char)_purgeSnapshotsOnVolume:(id)a0 preserveLastSnapshot:(char)a1 deleteAllSnapshotTypes:(char)a2 withError:(id *)a3;
- (double)estimatedTimeToComplete;
- (char)isSkippableSnapshot:(id)a0 deleteAllSnapshotTypes:(char)a1;
- (char)okayToSkip;

@end
