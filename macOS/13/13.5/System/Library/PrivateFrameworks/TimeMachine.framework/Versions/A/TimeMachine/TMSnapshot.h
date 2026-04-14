@class NSURL, NSString;

@interface TMSnapshot : NSObject <TMAPFSSnapshotProtocol>

@property (readonly, copy) NSURL *liveVolumeMountPoint;
@property (readonly) unsigned long long xid;
@property (readonly) unsigned long long fileID;
@property (readonly, copy) NSString *snapshotName;
@property (readonly) int flags;

+ (id)snapshotsForLiveVolumeMountPoint:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)delete:(id *)a0;
- (id)initWithLiveVolumeMountPoint:(id)a0 name:(id)a1 xid:(unsigned long long)a2 fileID:(unsigned long long)a3 flags:(int)a4;
- (BOOL)makeDataless:(id *)a0;
- (BOOL)mountAtURL:(id)a0 error:(id *)a1;
- (BOOL)waitForDeletionUntil:(id)a0 error:(id *)a1;

@end
