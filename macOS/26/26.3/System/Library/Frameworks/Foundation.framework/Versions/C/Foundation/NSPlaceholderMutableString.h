@interface NSPlaceholderMutableString : NSMutableString

- (unsigned long long)length;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2 freeWhenDone:(BOOL)a3;
- (id)retain;
- (id)initWithCStringNoCopy:(char *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)initWithFormat:(id)a0 locale:(id)a1 arguments:(char *)a2;
- (id)init;
- (BOOL)_tryRetain;
- (id)initWithCString:(const char *)a0 encoding:(unsigned long long)a1;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2 deallocator:(id /* block */)a3;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (BOOL)_isDeallocating;
- (id)initWithString:(id)a0;
- (id)initWithValidatedFormat:(id)a0 validFormatSpecifiers:(id)a1 locale:(id)a2 arguments:(char *)a3 error:(id *)a4;
- (void)dealloc;
- (id)_initWithFormat:(id)a0 locale:(id)a1 options:(id)a2 arguments:(char *)a3;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)_initWithValidatedFormat:(id)a0 validFormatSpecifiers:(id)a1 locale:(id)a2 options:(id)a3 error:(id *)a4 arguments:(char *)a5;
- (id)initWithUTF8String:(const char *)a0;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 deallocator:(id /* block */)a2;
- (oneway void)release;

@end
