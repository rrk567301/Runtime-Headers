@interface __NSCFCharacterSet : NSMutableCharacterSet <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)invert;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)formUnionWithCharacterSet:(id)a0;
- (BOOL)_isDeallocating;
- (id)invertedSet;
- (BOOL)isSupersetOfSet:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_tryRetain;
- (void)removeCharactersInString:(id)a0;
- (void)addCharactersInString:(id)a0;
- (id)bitmapRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)retain;
- (BOOL)characterIsMember:(unsigned short)a0;
- (unsigned long long)retainCount;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (id)initWithCoder:(id)a0;
- (oneway void)release;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (unsigned long long)hash;
- (void)makeCharacterSetFast;
- (void)makeCharacterSetCompact;
- (BOOL)isEqual:(id)a0;

@end
