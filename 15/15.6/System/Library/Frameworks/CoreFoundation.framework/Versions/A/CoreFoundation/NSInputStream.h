@interface NSInputStream : NSStream {
    unsigned char _reserved[128];
}

@property (readonly) char hasBytesAvailable;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)inputStreamWithData:(id)a0;
+ (id)inputStreamWithFileAtPath:(id)a0;
+ (id)inputStreamWithURL:(id)a0;

- (void)dealloc;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (struct { long long x0; int x1; })_cfStreamError;
- (unsigned long long)_cfTypeID;
- (char)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (char)hasBytesAvailable;
- (id)initWithData:(id)a0;
- (id)initWithURL:(id)a0;

@end
