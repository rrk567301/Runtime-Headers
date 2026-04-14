@class NSString;

@interface NSSpellingSubstring : NSString {
    NSString *_originalString;
    unsigned long long _startingOffset;
}

- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (unsigned long long)length;
- (void)dealloc;
- (id)initWithOriginalString:(id)a0 startingOffset:(unsigned long long)a1;

@end
