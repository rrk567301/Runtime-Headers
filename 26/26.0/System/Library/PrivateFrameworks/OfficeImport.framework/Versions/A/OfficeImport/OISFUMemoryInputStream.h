@class NSString, NSData;

@interface OISFUMemoryInputStream : NSObject <OISFUBufferedInputStream> {
    NSData *mData;
    const char *mStart;
    const char *mCurrent;
    const char *mEnd;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canSeek;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (void)seekToOffset:(long long)a0;
- (long long)offset;
- (void)close;
- (id)closeLocalStream;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)initWithData:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2;
- (unsigned long long)readToBuffer:(char *)a0 size:(unsigned long long)a1;
- (unsigned long long)readToOwnBuffer:(const char **)a0 size:(unsigned long long)a1;
- (BOOL)seekWithinBufferToOffset:(long long)a0;

@end
