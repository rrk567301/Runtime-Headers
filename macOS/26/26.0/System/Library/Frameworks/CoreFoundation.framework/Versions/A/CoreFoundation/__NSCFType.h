@interface __NSCFType : NSObject

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (id)retain;
- (unsigned long long)retainCount;
- (id)description;
- (oneway void)release;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
