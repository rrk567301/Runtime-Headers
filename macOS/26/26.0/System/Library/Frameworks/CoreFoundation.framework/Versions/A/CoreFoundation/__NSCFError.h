@interface __NSCFError : NSError

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)_isDeallocating;
- (id)domain;
- (long long)code;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (BOOL)_tryRetain;
- (id)retain;
- (unsigned long long)retainCount;
- (id)initWithCoder:(id)a0;
- (oneway void)release;
- (id)userInfo;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
