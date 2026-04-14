@interface _PFAbstractString : NSString

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (Class)classForKeyedUnarchiver;
+ (id)alloc;

- (unsigned long long)fastestEncoding;
- (Class)classForCoder;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (const char *)_fastCStringContents:(BOOL)a0;
- (const char *)cString;
- (id)description;
- (const unsigned short *)_fastCharacterContents;
- (unsigned long long)smallestEncoding;
- (void)dealloc;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;

@end
