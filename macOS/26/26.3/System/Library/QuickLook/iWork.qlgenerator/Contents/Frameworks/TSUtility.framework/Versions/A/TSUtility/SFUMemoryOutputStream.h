@class NSString, NSMutableData;

@interface SFUMemoryOutputStream : NSObject <SFUOutputStream> {
    NSMutableData *mData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canSeek;
- (long long)offset;
- (void)close;
- (id)initWithData:(id)a0;
- (id)inputStream;
- (void)dealloc;
- (BOOL)canCreateInputStream;
- (id)closeLocalStream;
- (void)seekToOffset:(long long)a0 whence:(int)a1;
- (void)writeBuffer:(const char *)a0 size:(unsigned long long)a1;

@end
