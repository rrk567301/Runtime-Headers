@interface SUINSStringImplementation : NSObject

@property (readonly) unsigned long long length;

- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (const unsigned short *)_fastCharacterContents;
- (id)init;
- (const char *)_fastCStringContents:(BOOL)a0;

@end
