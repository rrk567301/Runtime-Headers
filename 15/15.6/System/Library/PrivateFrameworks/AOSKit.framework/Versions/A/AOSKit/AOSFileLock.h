@class NSString;

@interface AOSFileLock : NSObject {
    int _fileDescriptor;
    NSString *_filePath;
    char _isLocked;
}

- (void)dealloc;
- (void)unlock;
- (char)isLocked;
- (id)initWithFilePath:(id)a0;
- (char)lockWithExclusivity:(char)a0 andMaxWait:(double)a1;
- (char)_lockFileParentDirExists;

@end
