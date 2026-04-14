@class NSDate, NSString, NSFileSecurity, NSArray, NSURL, VolumePath, NSNumber, _TtC18TimeMachinePrivate11LookupStats;
@protocol VolumeSet;

@interface LookupItem : NSObject <CheckpointItem, SizedItem, CopyEngineItem, RelativePathItem, CrossVolumeCheckProtocol> {
    BOOL _useStat;
    struct stat { int st_dev; unsigned short st_mode; unsigned short st_nlink; unsigned long long st_ino; unsigned int st_uid; unsigned int st_gid; int st_rdev; struct timespec { long long tv_sec; long long tv_nsec; } st_atimespec; struct timespec { long long tv_sec; long long tv_nsec; } st_mtimespec; struct timespec { long long tv_sec; long long tv_nsec; } st_ctimespec; struct timespec { long long tv_sec; long long tv_nsec; } st_birthtimespec; long long st_size; long long st_blocks; int st_blksize; unsigned int st_flags; unsigned int st_gen; int st_lspare; long long st_qspare[2]; } _stat;
}

@property (class, readonly) NSArray *defaultResourceKeys;
@property (class, readonly) NSArray *sizingResourceKeys;

@property (readonly, copy) NSURL *url;
@property (readonly) unsigned long long options;
@property (readonly) unsigned long long realm;
@property (readonly) unsigned int itemType;
@property (readonly) unsigned long long protectionClass;
@property (readonly) BOOL mayHaveExtendedAttributes;
@property (readonly) NSString *fullPath;
@property (readonly) NSString *volumeRelativePath;
@property (readonly) NSString *sourceVolumeUUID;
@property (readonly, retain) VolumePath *volumePath;
@property (readonly) BOOL isMoveable;
@property (readonly) BOOL isRealmRoot;
@property (readonly) BOOL isMoveableRoot;
@property (readonly) struct _TMRulesQueryHints { unsigned short x0; int x1; BOOL x2; BOOL x3; BOOL x4; } hintsForPreOrderEnumeration;
@property (readonly) unsigned long long inode;
@property (readonly) BOOL hasMultipleHardLinks;
@property (readonly) unsigned long long hardLinkCount;
@property (readonly) BOOL isSystemImmutable;
@property (readonly) BOOL isUserImmutable;
@property (readonly) NSNumber *labelNumber;
@property (readonly) BOOL isSkippableFault;
@property (readonly) BOOL isDatalessFault;
@property (readonly) BOOL isICloudPromise;
@property (readonly) NSNumber *transientVolumeID;
@property (readonly) NSDate *creationDate;
@property (readonly) NSDate *contentModificationDate;
@property (readonly) NSDate *attributeModificationDate;
@property (readonly) NSNumber *fileSize;
@property (readonly) NSString *fileResourceType;
@property (readonly) NSFileSecurity *security;
@property (readonly) BOOL isVolumeCrossingNode;
@property unsigned long long exclusionState;
@property (weak) id<VolumeSet> foundInVolumeSet;
@property unsigned long long matchingInfo;
@property (retain) _TtC18TimeMachinePrivate11LookupStats *lookupStats;
@property (readonly) NSNumber *filePhysicalSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lookupItemForFullPath:(id)a0 onVolume:(id)a1 options:(unsigned long long)a2;
+ (id)lookupItemForURL:(id)a0 onVolume:(id)a1 options:(unsigned long long)a2;
+ (id)lookupItemForVolumePath:(id)a0 onVolumeSet:(id)a1 options:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)completionDate;
- (id)lookupItemByReplacingVolumeSet:(id)a0;
- (void)addToLookupStats:(unsigned long long)a0;
- (BOOL)checkpointWithRecursiveStats:(struct TMCombinedStats { struct TMStats { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct TMStats { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a0;
- (unsigned long long)compareWithItem:(id)a0 options:(unsigned long long)a1;
- (void)createLookupStats;
- (id)initWithURL:(id)a0 onVolume:(id)a1 options:(unsigned long long)a2;
- (id)initWithURL:(id)a0 onVolume:(id)a1 stat:(struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; })a2 options:(unsigned long long)a3;
- (id)initWithVolumePath:(id)a0 onVolumeSet:(id)a1 options:(unsigned long long)a2;
- (id)lookUpMatchingItemInVolumeSets:(id)a0 options:(unsigned long long)a1;
- (id)lookUpMatchingItemInVolumeSets:(id)a0 options:(unsigned long long)a1 alternateItemProvider:(id)a2;
- (id)lookupItemByReplacingRelativePath:(id)a0 onVolumeSet:(id)a1;
- (id)lookupItemByReplacingRelativePath:(id)a0 options:(unsigned long long)a1 onVolumeSet:(id)a2;
- (struct TMCombinedStats { struct TMStats { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct TMStats { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })recursiveStats;
- (BOOL)setStringAttribute:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)stringAttributesForKeys:(id)a0 error:(id *)a1;

@end
