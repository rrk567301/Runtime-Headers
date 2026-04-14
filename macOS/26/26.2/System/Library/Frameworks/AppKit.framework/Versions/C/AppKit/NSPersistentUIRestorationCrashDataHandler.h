@protocol NSPersistentUIStorageClient;

@interface NSPersistentUIRestorationCrashDataHandler : NSObject {
    id<NSPersistentUIStorageClient> _store;
    _Atomic int _crashBlameCounter;
    struct { int restorationCount; long long restorationStartTime; long long restorationEndTime; } _cachedCrashData;
    BOOL _cachedCrashDataIsValid;
}

- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (void)clearCrashCountFileIfNecessary;
- (long long)crashBlameCounter;
- (void)inspectCrashDataWithModification:(BOOL)a0 handler:(id /* block */)a1;
- (unsigned int)modifyCrashBlameCounterBy:(int)a0;

@end
