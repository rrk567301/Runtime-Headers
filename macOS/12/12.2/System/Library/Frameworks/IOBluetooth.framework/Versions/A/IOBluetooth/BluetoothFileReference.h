@class NSString, NSFileHandle;

@interface BluetoothFileReference : NSObject {
    NSString *mPathAndName;
    NSString *mName;
    NSString *mPreArchiveName;
    NSString *mTempDirPathAndName;
    NSFileHandle *mHandle;
    unsigned long long mSize;
    unsigned long long mSizeReceived;
    BOOL mIsArchived;
    unsigned long long mArchiveSize;
    BOOL mIsPreProcessed;
    BOOL mIsPostProcessed;
    BOOL mAllDataIsReceived;
    BOOL mIsOutputFile;
    BOOL mDLToTempDir;
    BOOL mTargetIsAMac;
    BOOL mDeleteOnRelease;
    BOOL mWasFolder;
    BOOL mFlag1;
    BOOL mFlag2;
    BOOL mFlag3;
}

+ (id)referenceOutputPathAndFile:(id)a0 downloadToTempDir:(BOOL)a1 allowRenaming:(BOOL)a2;
+ (unsigned int)archiveOptionsForOBEXSession:(id)a0;
+ (id)referenceInputPathAndFile:(id)a0 targetIsAMac:(BOOL)a1 enableArchiving:(BOOL)a2 archiveOptions:(unsigned int)a3;

- (unsigned long long)size;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (id)name;
- (id)handle;
- (void).cxx_destruct;
- (id)type;
- (id)path;
- (BOOL)remove;
- (BOOL)fileManager:(id)a0 shouldProceedAfterError:(id)a1;
- (unsigned long long)sizeReceived;
- (void)setExpectedSize:(unsigned long long)a0;
- (BOOL)writeDataToHandle:(id)a0;
- (void)saveHandle;
- (id)pathAndName;
- (int)doArchivingWithOptions:(unsigned int)a0;
- (void)setDeleteFileOnRelease:(BOOL)a0;
- (void)reOpenHandle;
- (BOOL)canCreateFile:(id)a0;
- (BOOL)moveToPathAndName:(id)a0;
- (BOOL)isFolder;
- (id)preArchivePathAndName;
- (id)preArchiveName;
- (BOOL)setOutputPathAndName:(id)a0;
- (BOOL)setFinalOutputPathAndName:(id)a0;
- (void)moveToFinalPathAndName;
- (id)sizeAsString;
- (void)setAllDataReceived;
- (BOOL)allDataIsReceived;
- (void)setTargetIsAMac:(BOOL)a0;
- (BOOL)isArchived;
- (void)setNeedsUnarchiving;
- (int)doUnArchivingWithOptions:(unsigned int)a0;
- (BOOL)isPreProcessed;
- (void)setIsPreProcessed;
- (BOOL)isPostProcessed;
- (void)setIsPostProcessed;
- (void)setFlag1:(BOOL)a0;
- (BOOL)getFlag1;
- (void)setFlag2:(BOOL)a0;
- (BOOL)getFlag2;
- (void)setFlag3:(BOOL)a0;
- (BOOL)getFlag3;

@end
