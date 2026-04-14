@class NSString, NSCharacterSet;

@interface NSConcreteScanner : NSScanner {
    NSString *scanString;
    NSCharacterSet *skipSet;
    NSCharacterSet *invertedSkipSet;
    id locale;
    unsigned long long scanLocation;
    struct { unsigned char caseSensitive : 1; unsigned int  : 31; } flags;
}

- (BOOL)scanInt:(int *)a0;
- (id)locale;
- (void)setCaseSensitive:(BOOL)a0;
- (void)dealloc;
- (id)charactersToBeSkipped;
- (id)_invertedSkipSet;
- (id)string;
- (void)setScanLocation:(unsigned long long)a0;
- (void)setCharactersToBeSkipped:(id)a0;
- (unsigned long long)scanLocation;
- (void)setLocale:(id)a0;
- (id)initWithString:(id)a0;
- (BOOL)scanLongLong:(long long *)a0;
- (BOOL)caseSensitive;

@end
