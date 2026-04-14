@class NSString, NSCharacterSet;

@interface NSConcreteScanner : NSScanner {
    NSString *scanString;
    NSCharacterSet *skipSet;
    NSCharacterSet *invertedSkipSet;
    id locale;
    unsigned long long scanLocation;
    struct { unsigned char caseSensitive : 1; unsigned int  : 31; } flags;
}

- (id)locale;
- (id)_invertedSkipSet;
- (void)setLocale:(id)a0;
- (unsigned long long)scanLocation;
- (void)setCharactersToBeSkipped:(id)a0;
- (id)initWithString:(id)a0;
- (BOOL)scanInt:(int *)a0;
- (void)setCaseSensitive:(BOOL)a0;
- (void)setScanLocation:(unsigned long long)a0;
- (BOOL)caseSensitive;
- (id)string;
- (id)charactersToBeSkipped;
- (BOOL)scanLongLong:(long long *)a0;
- (void)dealloc;

@end
