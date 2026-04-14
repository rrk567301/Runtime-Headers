@interface _NSBPlistMappedString : NSString {
    unsigned long long payload;
}

+ (void)initialize;
+ (id)createStringWithOffset:(long long)a0 intoMappingData:(id)a1;

- (const char *)_fastCStringContents:(BOOL)a0;
- (unsigned long long)fastestEncoding;
- (unsigned long long)smallestEncoding;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (const char *)_fastUTF8StringContents:(BOOL)a0 utf8Length:(unsigned long long *)a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)length;

@end
