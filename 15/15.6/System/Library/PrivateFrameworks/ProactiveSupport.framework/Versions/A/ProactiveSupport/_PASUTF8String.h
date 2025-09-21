@class NSData;

@interface _PASUTF8String : NSString <NSCopying, NSMutableCopying> {
    const char *_buffer;
    const char *_bufferEnd;
    NSData *_backingData;
    struct { unsigned char x0 : 6; unsigned char x1 : 1; unsigned char x2 : 1; unsigned int x3 : 24; } *_chunks;
    unsigned int _nchunks;
    unsigned int _asciiPrefixLength;
    unsigned int _length;
    char _nullTerminated;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (const char *)UTF8String;
- (unsigned long long)length;
- (unsigned long long)lengthOfBytesUsingEncoding:(unsigned long long)a0;
- (unsigned long long)fastestEncoding;
- (void).cxx_destruct;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)dataUsingEncoding:(unsigned long long)a0;
- (char)canBeConvertedToEncoding:(unsigned long long)a0;
- (unsigned long long)maximumLengthOfBytesUsingEncoding:(unsigned long long)a0;
- (const char *)_pas_overrideFastUTF8StringPtrWithOptions:(unsigned long long)a0 encodedLength:(unsigned long long *)a1;
- (id)_pas_overrideStringBackedByUTF8CString;
- (id)initWithUTF8Data:(id)a0 asciiPrefixLength:(unsigned int)a1 nullTerminated:(char)a2;

@end
