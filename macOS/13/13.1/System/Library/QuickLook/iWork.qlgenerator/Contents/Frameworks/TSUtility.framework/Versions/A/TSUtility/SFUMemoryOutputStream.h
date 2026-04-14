@class NSString, NSMutableData;

@interface SFUMemoryOutputStream : NSObject <SFUOutputStream> {
    NSMutableData *mData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithData:(id)a0;
- (void)close;
- (long long)offset;
- (id)inputStream;
- (BOOL)canSeek;
- (id)closeLocalStream;
- (void)seekToOffset:(long long)a0 whence:(int)a1;
- (BOOL)canCreateInputStream;
- (void)writeBuffer:(const char *)a0 size:(unsigned long long)a1;

@end
