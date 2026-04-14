@interface WBSFileLockPOSIX : NSObject <WBSFileLock> {
    int _fileDescriptor;
}

- (void)releaseLock;
- (id)initWithFileDescriptor:(int)a0;
- (void)dealloc;

@end
