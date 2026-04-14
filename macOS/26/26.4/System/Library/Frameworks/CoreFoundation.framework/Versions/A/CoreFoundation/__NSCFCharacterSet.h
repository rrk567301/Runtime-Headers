@interface __NSCFCharacterSet : NSMutableCharacterSet <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)invertedSet;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (void)makeCharacterSetFast;
- (void)makeCharacterSetCompact;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (BOOL)_tryRetain;
- (void)formUnionWithCharacterSet:(id)a0;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)invert;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (BOOL)isSupersetOfSet:(id)a0;
- (id)bitmapRepresentation;
- (void)removeCharactersInString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isDeallocating;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addCharactersInString:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (unsigned long long)hash;
- (oneway void)release;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (BOOL)characterIsMember:(unsigned short)a0;
- (unsigned long long)retainCount;

@end
