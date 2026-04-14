@interface NSCFError : NSError

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)domain;
- (long long)code;
- (Class)classForCoder;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)retain;
- (unsigned long long)retainCount;
- (id)initWithCoder:(id)a0;
- (oneway void)release;
- (id)userInfo;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_callStackReturnAddresses;

@end
