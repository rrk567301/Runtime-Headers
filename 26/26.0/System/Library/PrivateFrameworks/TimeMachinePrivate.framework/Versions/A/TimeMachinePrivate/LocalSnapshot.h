@class NSString, NSDate;

@interface LocalSnapshot : TMDisk <VolumeProtocol, LookupItemValidating>

@property (readonly, copy) NSString *liveVolumeUUID;
@property unsigned long long xid;
@property (readonly) unsigned long long fileID;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDate *date;
@property BOOL isDataless;
@property (readonly) NSString *persistentUUID;
@property (readonly) NSString *mountPoint;

+ (id)snapshotForMountPoint:(id)a0 date:(id)a1 xid:(unsigned long long)a2 fileID:(unsigned long long)a3 flags:(int)a4 error:(id *)a5;

- (void).cxx_destruct;
- (id)fullPathFromVolumePath:(id)a0;
- (id)initWithMountPointPath:(id)a0 date:(id)a1 xid:(unsigned long long)a2 fileID:(unsigned long long)a3 flags:(int)a4 error:(id *)a5;
- (BOOL)validateLookupItem:(id)a0 options:(unsigned long long)a1;

@end
