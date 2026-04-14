@interface NSPathStore2 : NSString {
    unsigned int _lengthAndRefCount;
    unsigned short _characters[0];
}

+ (id)pathStoreWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
+ (id)pathWithComponents:(id)a0;

- (id)copy;
- (BOOL)isEqualToString:(id)a0;
- (unsigned long long)length;
- (id)stringByDeletingPathExtension;
- (id)lastPathComponent;
- (id)stringByAppendingPathComponent:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)isAbsolutePath;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)pathExtension;
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)a0;
- (id)stringByAppendingPathExtension:(id)a0;
- (id)stringByStandardizingPath;
- (id)_stringByStandardizingPathUsingCache:(BOOL)a0;
- (id)stringByResolvingSymlinksInPath;
- (id)stringByExpandingTildeInPath;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)pathComponents;
- (id)stringByDeletingLastPathComponent;
- (const unsigned short *)_fastCharacterContents;

@end
