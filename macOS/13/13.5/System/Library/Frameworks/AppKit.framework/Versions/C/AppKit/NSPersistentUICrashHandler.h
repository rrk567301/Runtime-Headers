@class NSPersistentUIFileManager;

@interface NSPersistentUICrashHandler : NSObject {
    NSPersistentUIFileManager *_fileManager;
    _Atomic int _crashBlameCounter;
}

- (void).cxx_destruct;
- (void)clearCrashCountFileIfNecessary;
- (long long)crashBlameCounter;
- (id)initWithFileManager:(id)a0;
- (void)inspectCrashDataWithModification:(BOOL)a0 handler:(id /* block */)a1;
- (unsigned int)modifyCrashBlameCounterBy:(int)a0;

@end
