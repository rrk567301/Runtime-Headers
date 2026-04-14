@class NSString;

@interface AOSFileLock : NSObject {
    int _fileDescriptor;
    NSString *_filePath;
    BOOL _isLocked;
}

- (void)dealloc;
- (void)unlock;
- (BOOL)isLocked;
- (id)initWithFilePath:(id)a0;
- (BOOL)_lockFileParentDirExists;
- (BOOL)lockWithExclusivity:(BOOL)a0 andMaxWait:(double)a1;

@end
