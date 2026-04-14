@interface __NSCFError : NSError

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (long long)code;
- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)_tryRetain;
- (Class)classForCoder;
- (id)domain;
- (BOOL)_isDeallocating;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)userInfo;
- (oneway void)release;

@end
