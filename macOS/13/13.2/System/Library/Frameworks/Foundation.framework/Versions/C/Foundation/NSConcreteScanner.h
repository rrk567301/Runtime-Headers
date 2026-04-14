@class NSString, NSCharacterSet;

@interface NSConcreteScanner : NSScanner {
    NSString *scanString;
    NSCharacterSet *skipSet;
    NSCharacterSet *invertedSkipSet;
    id locale;
    unsigned long long scanLocation;
    struct { unsigned char caseSensitive : 1; unsigned int  : 31; } flags;
}

- (void)dealloc;
- (id)string;
- (id)initWithString:(id)a0;
- (void)setLocale:(id)a0;
- (id)locale;
- (unsigned long long)scanLocation;
- (void)setScanLocation:(unsigned long long)a0;
- (BOOL)scanLongLong:(long long *)a0;
- (BOOL)scanInt:(int *)a0;
- (id)charactersToBeSkipped;
- (BOOL)caseSensitive;
- (id)_invertedSkipSet;
- (void)setCharactersToBeSkipped:(id)a0;
- (void)setCaseSensitive:(BOOL)a0;

@end
