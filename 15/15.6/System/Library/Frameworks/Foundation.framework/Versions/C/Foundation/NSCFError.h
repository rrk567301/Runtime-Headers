@interface NSCFError : NSError

+ (char)automaticallyNotifiesObserversForKey:(id)a0;

- (oneway void)release;
- (char)allowsWeakReference;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (char)retainWeakReference;
- (Class)classForCoder;
- (long long)code;
- (id)domain;
- (id)initWithCoder:(id)a0;
- (id)userInfo;
- (id)_callStackReturnAddresses;

@end
