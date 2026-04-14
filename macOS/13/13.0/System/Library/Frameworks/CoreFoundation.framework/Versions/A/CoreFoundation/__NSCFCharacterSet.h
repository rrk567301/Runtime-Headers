@interface __NSCFCharacterSet : NSMutableCharacterSet <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (oneway void)release;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)characterIsMember:(unsigned short)a0;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (BOOL)isSupersetOfSet:(id)a0;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (id)bitmapRepresentation;
- (id)invertedSet;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addCharactersInString:(id)a0;
- (void)removeCharactersInString:(id)a0;
- (void)formUnionWithCharacterSet:(id)a0;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (void)invert;
- (void)makeCharacterSetCompact;
- (void)makeCharacterSetFast;

@end
