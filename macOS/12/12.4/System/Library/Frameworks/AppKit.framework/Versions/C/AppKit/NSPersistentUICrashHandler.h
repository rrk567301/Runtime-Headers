@class NSURL;

@interface NSPersistentUICrashHandler : NSObject {
    NSURL *_restorationCountFileURL;
    int _crashBlameCounter;
}

- (void)dealloc;
- (void)clearCrashCountFileIfNecessary;
- (id)initWithRestorationCountFileURL:(id)a0;
- (unsigned int)modifyCrashBlameCounterBy:(int)a0;
- (long long)crashBlameCounter;
- (void)inspectCrashDataWithModification:(BOOL)a0 handler:(id /* block */)a1;

@end
