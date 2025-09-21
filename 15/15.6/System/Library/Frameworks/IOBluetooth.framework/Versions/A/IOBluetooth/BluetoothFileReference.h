@class NSString, NSFileHandle;

@interface BluetoothFileReference : NSObject {
    NSString *mPathAndName;
    NSString *mName;
    NSString *mPreArchiveName;
    NSString *mTempDirPathAndName;
    NSFileHandle *mHandle;
    unsigned long long mSize;
    unsigned long long mSizeReceived;
    char mIsArchived;
    unsigned long long mArchiveSize;
    char mIsPreProcessed;
    char mIsPostProcessed;
    char mAllDataIsReceived;
    char mIsOutputFile;
    char mDLToTempDir;
    char mTargetIsAMac;
    char mDeleteOnRelease;
    char mWasFolder;
    char mFlag1;
    char mFlag2;
    char mFlag3;
}

+ (unsigned int)archiveOptionsForOBEXSession:(id)a0;
+ (id)referenceInputPathAndFile:(id)a0 targetIsAMac:(char)a1 enableArchiving:(char)a2 archiveOptions:(unsigned int)a3;
+ (id)referenceOutputPathAndFile:(id)a0 downloadToTempDir:(char)a1 allowRenaming:(char)a2;

- (void)dealloc;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (id)path;
- (id)type;
- (unsigned long long)size;
- (char)fileManager:(id)a0 shouldProceedAfterError:(id)a1;
- (char)remove;
- (id)handle;
- (char)isFolder;
- (char)isPostProcessed;
- (char)allDataIsReceived;
- (char)canCreateFile:(id)a0;
- (int)doArchivingWithOptions:(unsigned int)a0;
- (int)doUnArchivingWithOptions:(unsigned int)a0;
- (char)getFlag1;
- (char)getFlag2;
- (char)getFlag3;
- (char)isArchived;
- (char)isPreProcessed;
- (void)moveToFinalPathAndName;
- (char)moveToPathAndName:(id)a0;
- (id)pathAndName;
- (id)preArchiveName;
- (id)preArchivePathAndName;
- (void)reOpenHandle;
- (void)saveHandle;
- (void)setAllDataReceived;
- (void)setDeleteFileOnRelease:(char)a0;
- (void)setExpectedSize:(unsigned long long)a0;
- (char)setFinalOutputPathAndName:(id)a0;
- (void)setFlag1:(char)a0;
- (void)setFlag2:(char)a0;
- (void)setFlag3:(char)a0;
- (void)setIsPostProcessed;
- (void)setIsPreProcessed;
- (void)setNeedsUnarchiving;
- (char)setOutputPathAndName:(id)a0;
- (void)setTargetIsAMac:(char)a0;
- (id)sizeAsString;
- (unsigned long long)sizeReceived;
- (char)writeDataToHandle:(id)a0;

@end
