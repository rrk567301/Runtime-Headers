@interface NSPlaceholderString : NSString

- (char)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (char)_tryRetain;
- (id)autorelease;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2;
- (unsigned long long)length;
- (id)initWithString:(id)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2 freeWhenDone:(char)a3;
- (id)initWithCString:(const char *)a0 encoding:(unsigned long long)a1;
- (id)initWithCString:(const char *)a0 length:(unsigned long long)a1;
- (id)initWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (id)initWithData:(id)a0 encoding:(unsigned long long)a1;
- (id)_initWithFormat:(id)a0 locale:(id)a1 options:(id)a2 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a3;
- (id)_initWithValidatedFormat:(id)a0 validFormatSpecifiers:(id)a1 locale:(id)a2 options:(id)a3 error:(id *)a4 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a5;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2 deallocator:(id /* block */)a3;
- (id)initWithCString:(const char *)a0;
- (id)initWithCStringNoCopy:(char *)a0 length:(unsigned long long)a1 freeWhenDone:(char)a2;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 deallocator:(id /* block */)a2;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 freeWhenDone:(char)a2;
- (id)initWithFormat:(id)a0 locale:(id)a1 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a2;
- (id)initWithValidatedFormat:(id)a0 validFormatSpecifiers:(id)a1 locale:(id)a2 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a3 error:(id *)a4;

@end
