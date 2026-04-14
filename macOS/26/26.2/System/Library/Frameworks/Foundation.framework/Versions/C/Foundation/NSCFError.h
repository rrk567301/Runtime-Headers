@interface NSCFError : NSError

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (id)domain;
- (long long)code;
- (unsigned long long)retainCount;
- (id)userInfo;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (BOOL)retainWeakReference;
- (id)_callStackReturnAddresses;

@end
