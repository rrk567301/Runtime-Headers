@interface NSCFCharacterSet : NSMutableCharacterSet

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)addCharactersInString:(id)a0;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)invert;
- (Class)classForArchiver;
- (unsigned long long)retainCount;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (void)removeCharactersInString:(id)a0;
- (id)invertedSet;
- (id)retain;
- (BOOL)allowsWeakReference;
- (BOOL)characterIsMember:(unsigned short)a0;
- (void)makeCharacterSetFast;
- (Class)classForKeyedArchiver;
- (BOOL)retainWeakReference;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (void)formUnionWithCharacterSet:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isSupersetOfSet:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)makeCharacterSetCompact;
- (void)encodeWithCoder:(id)a0;
- (id)bitmapRepresentation;
- (oneway void)release;

@end
