@interface NSCFCharacterSet : NSMutableCharacterSet

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)invertedSet;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addCharactersInString:(id)a0;
- (void)removeCharactersInString:(id)a0;
- (void)formUnionWithCharacterSet:(id)a0;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (void)invert;
- (void)encodeWithCoder:(id)a0;
- (id)bitmapRepresentation;
- (BOOL)characterIsMember:(unsigned short)a0;
- (BOOL)isSupersetOfSet:(id)a0;
- (void)makeCharacterSetCompact;
- (void)makeCharacterSetFast;
- (Class)classForKeyedArchiver;
- (Class)classForArchiver;

@end
