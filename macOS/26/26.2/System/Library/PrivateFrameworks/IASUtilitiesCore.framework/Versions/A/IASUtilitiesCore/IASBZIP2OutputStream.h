@interface IASBZIP2OutputStream : IASOutputStream

@property (nonatomic) struct { char *x0; unsigned int x1; unsigned int x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; unsigned int x7; void *x8; void /* function */ *x9; void /* function */ *x10; void *x11; } *stream;
@property (nonatomic) BOOL endOfFile;
@property (nonatomic) BOOL closed;
@property (nonatomic) char *writeBuffer;
@property (nonatomic) unsigned int writeBufferCapacity;
@property (nonatomic) int blockSize;

- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (unsigned long long)streamStatus;
- (BOOL)hasSpaceAvailable;
- (void)open;
- (void)close;
- (id)init;
- (id)currentBzip2ErrorWithReturnValue:(int)a0;

@end
