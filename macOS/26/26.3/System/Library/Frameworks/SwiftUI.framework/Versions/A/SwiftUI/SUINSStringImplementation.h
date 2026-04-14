@interface SUINSStringImplementation : NSObject

@property (readonly) unsigned long long length;

- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)init;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (const char *)_fastCStringContents:(BOOL)a0;
- (const unsigned short *)_fastCharacterContents;

@end
