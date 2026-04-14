@class NSString, NSCharacterSet;

@interface NSConcreteScanner : NSScanner {
    NSString *scanString;
    NSCharacterSet *skipSet;
    NSCharacterSet *invertedSkipSet;
    id locale;
    unsigned long long scanLocation;
    struct { unsigned char caseSensitive : 1; unsigned int  : 31; } flags;
}

- (void)setScanLocation:(unsigned long long)a0;
- (void)setCaseSensitive:(BOOL)a0;
- (id)initWithString:(id)a0;
- (void)setLocale:(id)a0;
- (BOOL)caseSensitive;
- (unsigned long long)scanLocation;
- (id)_invertedSkipSet;
- (BOOL)scanInt:(int *)a0;
- (id)locale;
- (void)setCharactersToBeSkipped:(id)a0;
- (id)charactersToBeSkipped;
- (id)string;
- (BOOL)scanLongLong:(long long *)a0;
- (void)dealloc;

@end
