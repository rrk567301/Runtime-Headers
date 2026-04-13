@interface NSCFType : NSObject

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;

@end
