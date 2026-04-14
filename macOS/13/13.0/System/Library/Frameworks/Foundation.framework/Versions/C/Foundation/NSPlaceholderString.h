@interface NSPlaceholderString : NSString

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (id)init;
- (unsigned long long)length;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)initWithString:(id)a0;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2 freeWhenDone:(BOOL)a3;
- (id)initWithCString:(const char *)a0 encoding:(unsigned long long)a1;
- (id)initWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (id)initWithData:(id)a0 encoding:(unsigned long long)a1;
- (id)initWithFormat:(id)a0 locale:(id)a1 arguments:(char *)a2;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2 deallocator:(id /* block */)a3;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 deallocator:(id /* block */)a2;
- (id)initWithCStringNoCopy:(char *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)initWithValidatedFormat:(id)a0 validFormatSpecifiers:(id)a1 locale:(id)a2 arguments:(char *)a3 error:(id *)a4;
- (id)_initWithFormat:(id)a0 locale:(id)a1 options:(id)a2 arguments:(char *)a3;
- (id)_initWithValidatedFormat:(id)a0 validFormatSpecifiers:(id)a1 locale:(id)a2 options:(id)a3 error:(id *)a4 arguments:(char *)a5;
- (id)initWithCString:(const char *)a0 length:(unsigned long long)a1;
- (id)initWithCString:(const char *)a0;

@end
