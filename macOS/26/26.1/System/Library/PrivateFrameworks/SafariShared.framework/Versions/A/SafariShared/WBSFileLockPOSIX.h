@interface WBSFileLockPOSIX : NSObject <WBSFileLock> {
    int _fileDescriptor;
}

- (void)releaseLock;
- (void)dealloc;
- (id)initWithFileDescriptor:(int)a0;

@end
