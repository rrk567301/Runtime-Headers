@interface NSCFType : NSObject

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)hash;
- (oneway void)release;
- (unsigned long long)retainCount;

@end
