@interface __NSATSStringSegment : NSString {
    struct __CFString { } *_originalString;
    long long _originalStringLength;
    struct { long long location; long long length; } _range;
    const unsigned short *_characters;
    unsigned short _buffer[128];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)dealloc;
- (oneway void)release;
- (unsigned long long)length;

@end
