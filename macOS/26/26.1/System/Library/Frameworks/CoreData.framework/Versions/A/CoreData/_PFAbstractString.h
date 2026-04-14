@interface _PFAbstractString : NSString

+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (Class)classForKeyedUnarchiver;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)smallestEncoding;
- (const char *)_fastCStringContents:(BOOL)a0;
- (unsigned long long)fastestEncoding;
- (Class)classForCoder;
- (id)description;
- (void)dealloc;
- (const char *)cString;
- (const unsigned short *)_fastCharacterContents;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;

@end
