@interface __NSCFCharacterSet : NSMutableCharacterSet <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (char)automaticallyNotifiesObserversForKey:(id)a0;

- (char)_isDeallocating;
- (oneway void)release;
- (char)_tryRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addCharactersInString:(id)a0;
- (id)bitmapRepresentation;
- (char)characterIsMember:(unsigned short)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (void)formUnionWithCharacterSet:(id)a0;
- (char)hasMemberInPlane:(unsigned char)a0;
- (id)initWithCoder:(id)a0;
- (void)invert;
- (id)invertedSet;
- (char)isSupersetOfSet:(id)a0;
- (char)longCharacterIsMember:(unsigned int)a0;
- (void)makeCharacterSetCompact;
- (void)makeCharacterSetFast;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeCharactersInString:(id)a0;

@end
