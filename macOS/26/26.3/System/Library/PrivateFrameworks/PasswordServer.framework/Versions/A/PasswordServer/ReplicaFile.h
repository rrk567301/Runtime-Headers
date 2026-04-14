@interface ReplicaFile : NSObject {
    struct __CFDictionary { } *mReplicaDict;
    struct __CFArray { } *mFlatReplicaArray;
    BOOL mDirty;
    struct timespec { long long tv_sec; long long tv_nsec; } mReplicaFileModDate;
    struct __CFString { } *mSelfName;
    BOOL mRunningAsParent;
}

- (void)initCommon;
- (id)init;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)initWithContentsOfFile:(const char *)a0;
- (id)free;
- (id)initWithPList:(struct __CFDictionary { } *)a0;
- (id)initWithXMLStr:(const char *)a0;
- (struct __CFString { } *)getUniqueID;
- (struct __CFDictionary { } *)replicaDict;

@end
