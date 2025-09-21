@class NSString, NSMutableData;

@interface OISFUMemoryOutputStream : NSObject <SFUOutputStream> {
    NSMutableData *mData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canSeek;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)inputStream;
- (long long)offset;
- (void)close;
- (BOOL)canCreateInputStream;
- (id)closeLocalStream;
- (void)seekToOffset:(long long)a0 whence:(int)a1;
- (void)writeBuffer:(const char *)a0 size:(unsigned long long)a1;

@end
