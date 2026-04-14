@interface NSCFType : NSObject

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (oneway void)release;

@end
