@class NSURL, NSString;

@interface TMSnapshot : NSObject <TMAPFSSnapshotProtocol>

@property (readonly) char isLocalSnapshot;
@property (readonly, copy) NSURL *liveVolumeMountPoint;
@property (readonly) unsigned long long xid;
@property (readonly) unsigned long long fileID;
@property (readonly, copy) NSString *snapshotName;
@property (readonly) int flags;

+ (id)calculatePrivateSizeOfSnapshotsForLiveVolumeMountPoint:(id)a0 error:(id *)a1;
+ (id)calculatePrivateSizeOfSnapshotsFromXID:(unsigned long long)a0 toXID:(unsigned long long)a1 forLiveVolumeMountPoint:(id)a2 error:(id *)a3;
+ (id)calculatePrivateSizeOfSnapshotsWithNames:(id)a0 forLiveVolumeMountPoint:(id)a1 error:(id *)a2;
+ (id)datalessSnapshotNamesForLiveVolumeMountPoint:(id)a0 error:(id *)a1;
+ (id)localSnapshotsForLiveVolumeMountPoint:(id)a0 error:(id *)a1;
+ (id)snapshotNamesForLiveVolumeMountPoint:(id)a0 error:(id *)a1;
+ (id)snapshotWithName:(id)a0 forLiveVolumeMountPoint:(id)a1 error:(id *)a2;
+ (id)snapshotWithXID:(unsigned long long)a0 forLiveVolumeMountPoint:(id)a1 error:(id *)a2;
+ (id)snapshotsByXIDForLiveVolumeMountPoint:(id)a0 error:(id *)a1;
+ (id)snapshotsForLiveVolumeMountPoint:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (char)delete:(id *)a0;
- (id)initWithLiveVolumeMountPoint:(id)a0 name:(id)a1 xid:(unsigned long long)a2 fileID:(unsigned long long)a3 flags:(int)a4;
- (char)makeDataless:(id *)a0;
- (char)mountAtURL:(id)a0 error:(id *)a1;
- (char)waitForDeletionUntil:(id)a0 error:(id *)a1;

@end
