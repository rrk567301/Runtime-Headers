@class NSLock, NSString;

@interface SKGUpdaterStore : NSObject {
    NSLock *systemOidLock;
    struct atomic_flag { _Atomic BOOL _Value; } purgeInProgress;
    int _parentFd;
    int _indexType;
    NSString *_name;
    struct datastore_info { } *_dsi;
}

+ (id)lock;
+ (id)stores;
+ (void)flushAndCommitAll;
+ (id)instanceForIndexType:(int)a0;
+ (void)purgeAllWithUUID:(id)a0 listenerType:(int)a1 indexType:(int)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)enumerateItems:(id /* block */)a0;
- (BOOL)writeLanguageForBundleID:(const char *)a0 identifier:(const char *)a1 UUID:(const char *)a2 serialNumber:(unsigned long long)a3 language:(const char *)a4;
- (BOOL)checkPriorityForBundleID:(const char *)a0 identifier:(const char *)a1 UUID:(const char *)a2 serialNumber:(unsigned long long)a3 defaultIfNotExists:(BOOL)a4;
- (void)closeAndDeleteStore;
- (BOOL)flushAndCommit;
- (struct db_obj { long long x0; unsigned int x1; unsigned int x2; unsigned long long x3; long long x4; unsigned long long x5; unsigned int x6; unsigned int x7; unsigned char x8[0]; } *)getDBOWithOID:(long long)a0;
- (id)initWithParentFd:(int)a0 indexType:(int)a1;
- (BOOL)markForDeleteDBO:(struct db_obj { long long x0; unsigned int x1; unsigned int x2; unsigned long long x3; long long x4; unsigned long long x5; unsigned int x6; unsigned int x7; unsigned char x8[0]; } *)a0 purgeContext:(struct { unsigned long long x0; int x1; id x2; })a1;
- (BOOL)markPriorityForBundleID:(const char *)a0 identifier:(const char *)a1 UUID:(const char *)a2 serialNumber:(unsigned long long)a3 flag:(BOOL)a4;
- (void)purgeAllWithUUID:(id)a0 listenerType:(int)a1;
- (void)purgeAllWithUUIDImpl:(id)a0 listenerType:(int)a1;
- (id)readLanguageFromBundleID:(const char *)a0 identifier:(const char *)a1 UUID:(const char *)a2 serialNumber:(unsigned long long)a3;
- (unsigned long long)readSerialNumberFromBundleID:(const char *)a0 identifier:(const char *)a1 UUID:(const char *)a2 listenerType:(int)a3;
- (unsigned long long)readUpdaterStatus:(int)a0 UUID:(const char *)a1;
- (BOOL)removePriorityForBundleID:(const char *)a0 identifier:(const char *)a1 UUID:(const char *)a2 serialNumber:(unsigned long long)a3;
- (void)setProtectionClassForFolder:(int)a0 protectionClass:(int)a1;
- (BOOL)writeSerialNumberToBundleID:(const char *)a0 identifier:(const char *)a1 UUID:(const char *)a2 serialNumber:(unsigned long long)a3 listenerType:(int)a4;
- (BOOL)writeUpdaterStatus:(int)a0 UUID:(const char *)a1 serialNumber:(unsigned long long)a2;

@end
