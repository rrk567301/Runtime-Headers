@class NSString;

@interface OISFUMoveableFileOutputStream : NSObject <SFUOutputStream> {
    int mFd;
    NSString *mPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canSeek;
- (void)flush;
- (void)close;
- (id)inputStream;
- (id)path;
- (id)initWithPath:(id)a0;
- (long long)offset;
- (void)dealloc;
- (BOOL)canCreateInputStream;
- (id)closeLocalStream;
- (id)initWithTemporaryFile:(id)a0;
- (BOOL)moveToPath:(id)a0;
- (void)seekToOffset:(long long)a0 whence:(int)a1;
- (void)truncateToLength:(long long)a0;
- (void)writeBuffer:(const char *)a0 size:(unsigned long long)a1;

@end
