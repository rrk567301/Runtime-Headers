@class NSError, NSMutableArray;

@interface RamrodOSMessagePlist : NSOutputStream {
    NSError *_streamError;
}

@property (readonly, copy) NSMutableArray *chunks;
@property (readonly) unsigned long long length;

- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (void)invalidate;
- (BOOL)hasSpaceAvailable;
- (id)streamError;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPropertyList:(id)a0 error:(id *)a1;
- (void)appendToArray:(id)a0;

@end
