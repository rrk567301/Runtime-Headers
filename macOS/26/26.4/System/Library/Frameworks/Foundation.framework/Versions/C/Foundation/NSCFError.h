@interface NSCFError : NSError

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)retainWeakReference;
- (long long)code;
- (BOOL)allowsWeakReference;
- (id)domain;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (id)userInfo;
- (unsigned long long)hash;
- (oneway void)release;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (unsigned long long)retainCount;
- (id)_callStackReturnAddresses;

@end
