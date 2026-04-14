@interface NSCFError : NSError

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (Class)classForCoder;
- (id)userInfo;
- (id)initWithCoder:(id)a0;
- (long long)code;
- (id)domain;

@end
