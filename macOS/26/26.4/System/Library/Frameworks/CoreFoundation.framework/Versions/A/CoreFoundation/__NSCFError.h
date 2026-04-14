@interface __NSCFError : NSError

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (long long)code;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isDeallocating;
- (id)domain;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (id)userInfo;
- (unsigned long long)hash;
- (oneway void)release;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (unsigned long long)retainCount;

@end
