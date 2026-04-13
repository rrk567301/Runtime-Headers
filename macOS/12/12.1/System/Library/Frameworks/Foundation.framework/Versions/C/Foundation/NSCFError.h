@interface NSCFError : NSError

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (Class)classForCoder;
- (id)domain;
- (long long)code;
- (id)userInfo;
- (id)initWithCoder:(id)a0;

@end
