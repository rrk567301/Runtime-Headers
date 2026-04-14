@interface NSPlaceholderString : NSString

- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (id)_initWithFormat:(id)a0 locale:(id)a1 options:(id)a2 arguments:(char *)a3;
- (id)_initWithValidatedFormat:(id)a0 validFormatSpecifiers:(id)a1 locale:(id)a2 options:(id)a3 error:(id *)a4 arguments:(char *)a5;
- (BOOL)_tryRetain;
- (id)initWithData:(id)a0 encoding:(unsigned long long)a1;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2;
- (id)retain;
- (id)init;
- (id)initWithCStringNoCopy:(char *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)initWithFormat:(id)a0 locale:(id)a1 arguments:(char *)a2;
- (id)initWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (unsigned long long)retainCount;
- (id)initWithCString:(const char *)a0 encoding:(unsigned long long)a1;
- (id)initWithString:(id)a0;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2 deallocator:(id /* block */)a3;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 deallocator:(id /* block */)a2;
- (oneway void)release;
- (id)initWithCString:(const char *)a0;
- (id)initWithValidatedFormat:(id)a0 validFormatSpecifiers:(id)a1 locale:(id)a2 arguments:(char *)a3 error:(id *)a4;
- (unsigned long long)length;
- (id)initWithCString:(const char *)a0 length:(unsigned long long)a1;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2 freeWhenDone:(BOOL)a3;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;

@end
