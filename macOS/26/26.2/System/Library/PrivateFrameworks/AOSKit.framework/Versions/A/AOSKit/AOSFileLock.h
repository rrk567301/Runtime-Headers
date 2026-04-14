@class NSString;

@interface AOSFileLock : NSObject {
    int _fileDescriptor;
    NSString *_filePath;
    BOOL _isLocked;
}

- (id)initWithFilePath:(id)a0;
- (BOOL)isLocked;
- (void)unlock;
- (void)dealloc;
- (BOOL)lockWithExclusivity:(BOOL)a0 andMaxWait:(double)a1;
- (BOOL)_lockFileParentDirExists;

@end
