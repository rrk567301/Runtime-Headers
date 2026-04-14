@interface __NSCFCharacterSet : NSMutableCharacterSet <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
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
- (Class)classForCoder;
- (BOOL)isSupersetOfSet:(id)a0;
- (BOOL)_tryRetain;
- (void)encodeWithCoder:(id)a0;
- (void)removeCharactersInString:(id)a0;
- (void)makeCharacterSetCompact;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_isDeallocating;
- (id)initWithCoder:(id)a0;
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
