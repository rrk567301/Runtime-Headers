@interface NSPathStore2 : NSString {
    unsigned int _lengthAndRefCount;
    unsigned short _characters[0];
}

+ (id)pathWithComponents:(id)a0;
+ (id)pathStoreWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;

- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)stringByStandardizingPath;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (const unsigned short *)_fastCharacterContents;
- (id)lastPathComponent;
- (id)stringByAppendingPathComponent:(id)a0;
- (BOOL)isAbsolutePath;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)a0;
- (id)stringByAppendingPathExtension:(id)a0;
- (BOOL)isEqualToString:(id)a0;
- (id)stringByDeletingPathExtension;
- (id)copy;
- (id)_stringByStandardizingPathUsingCache:(BOOL)a0;
- (id)stringByResolvingSymlinksInPath;
- (id)pathComponents;
- (id)stringByDeletingLastPathComponent;
- (id)stringByExpandingTildeInPath;
- (unsigned long long)length;
- (unsigned long long)hash;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)pathExtension;

@end
