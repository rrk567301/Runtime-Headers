@interface _PFAbstractString : NSString

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (Class)classForKeyedUnarchiver;
+ (BOOL)accessInstanceVariablesDirectly;

- (void)dealloc;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (const char *)_fastCStringContents:(BOOL)a0;
- (const char *)cString;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (const unsigned short *)_fastCharacterContents;
- (unsigned long long)fastestEncoding;
- (unsigned long long)smallestEncoding;
- (Class)classForCoder;

@end
