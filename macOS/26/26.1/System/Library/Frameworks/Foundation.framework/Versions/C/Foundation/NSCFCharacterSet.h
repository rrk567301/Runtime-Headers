@interface NSCFCharacterSet : NSMutableCharacterSet

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (id)bitmapRepresentation;
- (unsigned long long)hash;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (BOOL)retainWeakReference;
- (BOOL)isSupersetOfSet:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)allowsWeakReference;
- (void)removeCharactersInString:(id)a0;
- (Class)classForArchiver;
- (void)makeCharacterSetCompact;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (Class)classForKeyedArchiver;
- (id)invertedSet;
- (void)addCharactersInString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)characterIsMember:(unsigned short)a0;
- (void)invert;
- (BOOL)isEqual:(id)a0;
- (void)formUnionWithCharacterSet:(id)a0;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (void)makeCharacterSetFast;

@end
