@interface NSCFType : NSObject

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)retain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
