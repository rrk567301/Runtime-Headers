@interface NSOutputStream : NSStream {
    unsigned char _reserved[128];
}

@property (readonly) char hasSpaceAvailable;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)outputStreamToBuffer:(char *)a0 capacity:(unsigned long long)a1;
+ (id)outputStreamToFileAtPath:(id)a0 append:(char)a1;
+ (id)outputStreamToMemory;
+ (id)outputStreamWithURL:(id)a0 append:(char)a1;

- (void)dealloc;
- (struct { long long x0; int x1; })_cfStreamError;
- (unsigned long long)_cfTypeID;
- (char)hasSpaceAvailable;
- (id)initToBuffer:(char *)a0 capacity:(unsigned long long)a1;
- (id)initToMemory;
- (id)initWithURL:(id)a0 append:(char)a1;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;

@end
