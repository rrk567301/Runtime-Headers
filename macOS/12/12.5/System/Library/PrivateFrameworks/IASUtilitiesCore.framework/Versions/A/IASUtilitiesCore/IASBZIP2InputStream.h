@interface IASBZIP2InputStream : IASInputStream

@property (nonatomic) struct { char *x0; unsigned int x1; unsigned int x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; unsigned int x7; void *x8; void /* function */ *x9; void /* function */ *x10; void *x11; } *stream;
@property (nonatomic) char *buffer;
@property (nonatomic) unsigned long long bufferCapacity;
@property (nonatomic) BOOL endOfFile;
@property (nonatomic) BOOL closed;

- (void)dealloc;
- (unsigned long long)streamStatus;
- (BOOL)hasBytesAvailable;
- (void)open;
- (void)close;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (long long)seekingCapability;
- (BOOL)forwardSeekingStreamRequiresReads;
- (id)currentBzip2ErrorWithReturnValue:(int)a0;

@end
