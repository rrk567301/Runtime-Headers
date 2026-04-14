@interface NSCFError : NSError

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (long long)code;
- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;
- (Class)classForCoder;
- (id)domain;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)userInfo;
- (oneway void)release;
- (id)_callStackReturnAddresses;

@end
