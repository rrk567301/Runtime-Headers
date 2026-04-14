@class NSString, NSCharacterSet;

@interface NSConcreteScanner : NSScanner {
    NSString *scanString;
    NSCharacterSet *skipSet;
    NSCharacterSet *invertedSkipSet;
    id locale;
    unsigned long long scanLocation;
    struct { unsigned char caseSensitive : 1; unsigned int  : 31; } flags;
}

- (BOOL)scanLongLong:(long long *)a0;
- (id)string;
- (void)setLocale:(id)a0;
- (id)locale;
- (id)_invertedSkipSet;
- (void)setCaseSensitive:(BOOL)a0;
- (void)setScanLocation:(unsigned long long)a0;
- (BOOL)caseSensitive;
- (id)initWithString:(id)a0;
- (id)charactersToBeSkipped;
- (BOOL)scanInt:(int *)a0;
- (void)dealloc;
- (unsigned long long)scanLocation;
- (void)setCharactersToBeSkipped:(id)a0;

@end
