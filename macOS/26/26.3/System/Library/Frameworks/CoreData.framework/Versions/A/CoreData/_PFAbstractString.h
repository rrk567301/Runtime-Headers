@interface _PFAbstractString : NSString

+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (Class)classForKeyedUnarchiver;

- (const char *)cString;
- (id)description;
- (unsigned long long)smallestEncoding;
- (unsigned long long)fastestEncoding;
- (Class)classForCoder;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (const char *)_fastCStringContents:(BOOL)a0;
- (const unsigned short *)_fastCharacterContents;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;

@end
