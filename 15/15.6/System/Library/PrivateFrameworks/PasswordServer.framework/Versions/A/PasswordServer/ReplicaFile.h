@interface ReplicaFile : NSObject {
    struct __CFDictionary { } *mReplicaDict;
    struct __CFArray { } *mFlatReplicaArray;
    char mDirty;
    struct timespec { long long tv_sec; long long tv_nsec; } mReplicaFileModDate;
    struct __CFString { } *mSelfName;
    char mRunningAsParent;
}

- (void)dealloc;
- (id)init;
- (id)initWithContentsOfFile:(const char *)a0;
- (void)lock;
- (void)unlock;
- (void)initCommon;
- (id)free;
- (id)initWithPList:(struct __CFDictionary { } *)a0;
- (id)initWithXMLStr:(const char *)a0;
- (struct __CFString { } *)getUniqueID;
- (struct __CFDictionary { } *)replicaDict;

@end
