@interface __NSCFCharacterSet : NSMutableCharacterSet <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)addCharactersInString:(id)a0;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)invert;
- (unsigned long long)retainCount;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (void)removeCharactersInString:(id)a0;
- (id)invertedSet;
- (id)retain;
- (BOOL)characterIsMember:(unsigned short)a0;
- (void)makeCharacterSetFast;
- (BOOL)_tryRetain;
- (Class)classForCoder;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (BOOL)_isDeallocating;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (id)initWithCoder:(id)a0;
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
