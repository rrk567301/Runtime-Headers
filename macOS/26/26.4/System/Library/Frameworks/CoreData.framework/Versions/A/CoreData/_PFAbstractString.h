@interface _PFAbstractString : NSString

+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;
+ (Class)classForKeyedUnarchiver;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (const char *)_fastCStringContents:(BOOL)a0;
- (unsigned long long)fastestEncoding;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (unsigned long long)smallestEncoding;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (const unsigned short *)_fastCharacterContents;
- (id)description;
- (Class)classForCoder;
- (void)dealloc;
- (const char *)cString;

@end
