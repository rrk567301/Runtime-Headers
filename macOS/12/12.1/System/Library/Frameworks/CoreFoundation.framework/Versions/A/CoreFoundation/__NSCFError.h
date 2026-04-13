@interface __NSCFError : NSError

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (Class)classForCoder;
- (id)domain;
- (long long)code;
- (id)userInfo;
- (id)initWithCoder:(id)a0;

@end
