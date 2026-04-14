@interface __NSCFError : NSError

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (id)userInfo;
- (unsigned long long)hash;
- (oneway void)release;
- (long long)code;
- (unsigned long long)retainCount;
- (Class)classForCoder;
- (BOOL)_tryRetain;
- (id)domain;
- (BOOL)_isDeallocating;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
