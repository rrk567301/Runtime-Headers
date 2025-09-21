@class NSError, NSMutableArray;

@interface RamrodOSMessagePlist : NSOutputStream {
    NSError *_streamError;
}

@property (readonly, copy) NSMutableArray *chunks;
@property (readonly) unsigned long long length;

- (void)dealloc;
- (void).cxx_destruct;
- (char)hasSpaceAvailable;
- (void)invalidate;
- (id)streamError;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (id)initWithPropertyList:(id)a0 error:(id *)a1;
- (int)sendToSocket:(int)a0;

@end
