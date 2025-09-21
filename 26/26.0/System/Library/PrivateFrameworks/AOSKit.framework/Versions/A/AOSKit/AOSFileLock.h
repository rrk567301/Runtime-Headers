@class NSString;

@interface AOSFileLock : NSObject {
    int _fileDescriptor;
    NSString *_filePath;
    BOOL _isLocked;
}

- (BOOL)isLocked;
- (void)unlock;
- (id)initWithFilePath:(id)a0;
- (void)dealloc;
- (BOOL)lockWithExclusivity:(BOOL)a0 andMaxWait:(double)a1;
- (BOOL)_lockFileParentDirExists;

@end
