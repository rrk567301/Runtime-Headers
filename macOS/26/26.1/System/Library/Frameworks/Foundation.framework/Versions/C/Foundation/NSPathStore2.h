@interface NSPathStore2 : NSString {
    unsigned int _lengthAndRefCount;
    unsigned short _characters[0];
}

+ (id)pathStoreWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
+ (id)pathWithComponents:(id)a0;

- (id)pathComponents;
- (id)copy;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)_stringByStandardizingPathUsingCache:(BOOL)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)stringByAppendingPathExtension:(id)a0;
- (unsigned long long)hash;
- (BOOL)isAbsolutePath;
- (id)pathExtension;
- (BOOL)isEqualToString:(id)a0;
- (id)stringByExpandingTildeInPath;
- (unsigned long long)length;
- (id)lastPathComponent;
- (id)stringByStandardizingPath;
- (id)stringByAppendingPathComponent:(id)a0;
- (id)stringByDeletingLastPathComponent;
- (id)stringByResolvingSymlinksInPath;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)a0;
- (id)stringByDeletingPathExtension;
- (const unsigned short *)_fastCharacterContents;
- (id)stringByAbbreviatingWithTildeInPath;

@end
