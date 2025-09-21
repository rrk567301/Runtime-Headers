@class NSString, NSError;

@interface PFFileIStream : PFFile <PFIStream, PFStream> {
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_file;
    char *_buffer;
    unsigned long long _bufferLength;
    NSError *_error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)lock;
- (void)unlock;
- (void)setError:(id)a0;
- (id)initWithFile:(id)a0;
- (void)updateError;
- (void)closeStream;
- (char)advanceStream;
- (char)advanceStream:(long long)a0 distanceMoved:(long long *)a1;
- (char)createDirectoryIfNecessary;
- (id)getStreamError;
- (char)openStream;
- (unsigned long long)preferredStreamBlockSize;
- (char)readStream:(char *)a0 length:(unsigned long long)a1 read:(unsigned long long *)a2;
- (char)rewindStream;
- (char)rewindStream:(long long)a0;
- (const char *)streamData:(unsigned long long *)a0;
- (long long)streamLength;
- (long long)streamPosition;

@end
