@interface DMCSnapshotUtilities : NSObject

- (BOOL)captureSystemVolumeSnapshotWithName:(id)a0;
- (BOOL)deleteSystemVolumeSnapshotWithName:(id)a0;
- (BOOL)_executeSnapshotActionAtPath:(id)a0 action:(id /* block */)a1;
- (BOOL)captureSnapshotAtPath:(id)a0 name:(id)a1;
- (BOOL)deleteSnapshotAtPath:(id)a0 name:(id)a1;

@end
