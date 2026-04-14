@interface NSCFError : NSError

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (id)userInfo;
- (unsigned long long)hash;
- (oneway void)release;
- (long long)code;
- (unsigned long long)retainCount;
- (Class)classForCoder;
- (BOOL)retainWeakReference;
- (id)domain;
- (BOOL)allowsWeakReference;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_callStackReturnAddresses;

@end
