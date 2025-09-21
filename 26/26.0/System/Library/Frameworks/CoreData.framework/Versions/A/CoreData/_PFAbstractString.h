@interface _PFAbstractString : NSString

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (Class)classForKeyedUnarchiver;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (const char *)cString;
- (const unsigned short *)_fastCharacterContents;
- (void)dealloc;
- (Class)classForCoder;
- (id)description;
- (unsigned long long)fastestEncoding;
- (unsigned long long)smallestEncoding;
- (const char *)_fastCStringContents:(BOOL)a0;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;

@end
