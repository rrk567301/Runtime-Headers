@class NSString, NSBundle;

@interface GCFLocalizedString : NSString

@property (readonly) NSString *key;
@property (readonly) NSBundle *bundle;
@property (readonly) NSString *table;

+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;

- (id)initWithUTF8String:(const char *)a0;
- (id)initWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2 freeWhenDone:(BOOL)a3;
- (id)initWithString:(id)a0;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 deallocator:(id /* block */)a2;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithValidatedFormat:(id)a0 validFormatSpecifiers:(id)a1 locale:(id)a2 arguments:(char *)a3 error:(id *)a4;
- (id)initWithCStringNoCopy:(char *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2 deallocator:(id /* block */)a3;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_allowsDirectEncoding;
- (id)initWithFormat:(id)a0 locale:(id)a1 arguments:(char *)a2;
- (unsigned long long)length;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithFormat:(id)a0 arg:(id)a1;
- (id)initWithKey:(id)a0 sourceBundle:(id)a1;
- (id)initWithKey:(id)a0 sourceBundle:(id)a1 table:(id)a2;
- (id)_realizedString;
- (id)initWithKey:(id)a0 sourceBundle:(id)a1 table:(id)a2 locale:(id)a3;

@end
