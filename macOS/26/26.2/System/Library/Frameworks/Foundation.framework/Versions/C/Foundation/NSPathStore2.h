@interface NSPathStore2 : NSString {
    unsigned int _lengthAndRefCount;
    unsigned short _characters[0];
}

+ (id)pathWithComponents:(id)a0;
+ (id)pathStoreWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;

- (BOOL)isEqualToString:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_stringByStandardizingPathUsingCache:(BOOL)a0;
- (unsigned long long)hash;
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)a0;
- (id)stringByStandardizingPath;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)pathComponents;
- (id)stringByAbbreviatingWithTildeInPath;
- (unsigned long long)length;
- (id)lastPathComponent;
- (id)stringByDeletingPathExtension;
- (id)stringByExpandingTildeInPath;
- (id)stringByDeletingLastPathComponent;
- (id)copy;
- (id)pathExtension;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (BOOL)isAbsolutePath;
- (const unsigned short *)_fastCharacterContents;
- (id)stringByAppendingPathExtension:(id)a0;
- (id)stringByAppendingPathComponent:(id)a0;
- (id)stringByResolvingSymlinksInPath;

@end
