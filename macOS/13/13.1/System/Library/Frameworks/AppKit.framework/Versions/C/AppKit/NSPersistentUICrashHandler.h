@class NSPersistentUIFileManager;

@interface NSPersistentUICrashHandler : NSObject {
    NSPersistentUIFileManager *_fileManager;
    _Atomic int _crashBlameCounter;
}

- (void).cxx_destruct;
- (id)initWithFileManager:(id)a0;
- (unsigned int)modifyCrashBlameCounterBy:(int)a0;
- (void)inspectCrashDataWithModification:(BOOL)a0 handler:(id /* block */)a1;
- (void)clearCrashCountFileIfNecessary;
- (long long)crashBlameCounter;

@end
