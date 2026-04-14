@interface __NSCFError : NSError

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (BOOL)_isDeallocating;
- (id)initWithCoder:(id)a0;
- (BOOL)_tryRetain;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)domain;
- (long long)code;
- (unsigned long long)retainCount;
- (id)userInfo;
- (oneway void)release;

@end
