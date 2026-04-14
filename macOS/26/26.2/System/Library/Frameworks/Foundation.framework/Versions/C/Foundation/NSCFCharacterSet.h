@interface NSCFCharacterSet : NSMutableCharacterSet

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (Class)classForArchiver;
- (id)retain;
- (void)removeCharactersInString:(id)a0;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)retainCount;
- (BOOL)isSupersetOfSet:(id)a0;
- (Class)classForKeyedArchiver;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)bitmapRepresentation;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (BOOL)allowsWeakReference;
- (void)makeCharacterSetCompact;
- (void)makeCharacterSetFast;
- (oneway void)release;
- (void)addCharactersInString:(id)a0;
- (void)invert;
- (id)invertedSet;
- (void)formUnionWithCharacterSet:(id)a0;
- (BOOL)characterIsMember:(unsigned short)a0;
- (BOOL)retainWeakReference;

@end
