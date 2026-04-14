@interface NSCFCharacterSet : NSMutableCharacterSet

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)retainWeakReference;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)invertedSet;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (void)makeCharacterSetFast;
- (void)makeCharacterSetCompact;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (BOOL)allowsWeakReference;
- (void)formUnionWithCharacterSet:(id)a0;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)invert;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (BOOL)isSupersetOfSet:(id)a0;
- (id)bitmapRepresentation;
- (void)removeCharactersInString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addCharactersInString:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (unsigned long long)hash;
- (oneway void)release;
- (Class)classForKeyedArchiver;
- (Class)classForArchiver;
- (BOOL)characterIsMember:(unsigned short)a0;
- (unsigned long long)retainCount;

@end
