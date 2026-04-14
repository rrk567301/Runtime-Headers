@class NSString, NSCharacterSet;

@interface NSConcreteScanner : NSScanner {
    NSString *scanString;
    NSCharacterSet *skipSet;
    NSCharacterSet *invertedSkipSet;
    id locale;
    unsigned long long scanLocation;
    struct { unsigned char caseSensitive : 1; unsigned int  : 31; } flags;
}

- (void)setLocale:(id)a0;
- (void)setCaseSensitive:(BOOL)a0;
- (void)setScanLocation:(unsigned long long)a0;
- (unsigned long long)scanLocation;
- (void)setCharactersToBeSkipped:(id)a0;
- (BOOL)scanLongLong:(long long *)a0;
- (BOOL)caseSensitive;
- (id)charactersToBeSkipped;
- (id)initWithString:(id)a0;
- (void)dealloc;
- (id)locale;
- (id)string;
- (BOOL)scanInt:(int *)a0;
- (id)_invertedSkipSet;

@end
