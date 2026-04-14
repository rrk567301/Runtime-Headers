@interface NSPathStore2 : NSString {
    unsigned int _lengthAndRefCount;
    unsigned short _characters[0];
}

+ (id)pathStoreWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
+ (id)pathWithComponents:(id)a0;

- (BOOL)isEqualToString:(id)a0;
- (id)stringByDeletingLastPathComponent;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)stringByExpandingTildeInPath;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)stringByStandardizingPath;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringByResolvingSymlinksInPath;
- (id)stringByDeletingPathExtension;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)copy;
- (unsigned long long)length;
- (id)pathExtension;
- (id)stringByAppendingPathComponent:(id)a0;
- (const unsigned short *)_fastCharacterContents;
- (unsigned long long)hash;
- (BOOL)isAbsolutePath;
- (id)_stringByStandardizingPathUsingCache:(BOOL)a0;
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)a0;
- (id)lastPathComponent;
- (id)stringByAppendingPathExtension:(id)a0;
- (id)pathComponents;

@end
