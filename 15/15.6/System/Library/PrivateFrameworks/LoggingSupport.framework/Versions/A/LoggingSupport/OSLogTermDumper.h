@interface OSLogTermDumper : NSObject {
    struct os_trace_blob_s { union { char *ob_b; void *ob_v; char *ob_s; char *ob_c; } ; unsigned int ob_len; unsigned int ob_size; unsigned int ob_maxsize; unsigned short ob_flags; BOOL ob_binary; } _ob;
    unsigned short _last_attrs;
    unsigned char _ob_slop[1];
    int _fd;
    char _vis;
}

@property (readonly, nonatomic) unsigned char colorMode;
@property (readonly, nonatomic) char isFancy;
@property (nonatomic) unsigned short style;
@property (nonatomic, getter=isBold) char bold;
@property (nonatomic, getter=isOblique) char oblique;
@property (nonatomic, getter=isUnderlined) char underline;
@property (nonatomic) unsigned char bgColor;
@property (nonatomic) unsigned char fgColor;

- (void)dealloc;
- (id)init;
- (void)beginEditing;
- (void)close;
- (void)endEditing;
- (void)puts:(const char *)a0;
- (void)startPager;
- (void)flush:(char)a0;
- (unsigned int)format:(const char *)a0;
- (void)hexdump:(const void *)a0 length:(unsigned long long)a1;
- (void)writeln;
- (void)_flushAttrs;
- (void)_resetAttrsForNewline;
- (id)initWithFd:(int)a0 colorMode:(unsigned char)a1;
- (void)pad:(int)a0 count:(unsigned long long)a1;
- (void)putUUID:(unsigned char[16])a0;
- (void)putc:(int)a0;
- (void)resetStyle;
- (unsigned int)vformat:(const char *)a0 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a1;
- (void)write:(const void *)a0 size:(unsigned long long)a1;

@end
