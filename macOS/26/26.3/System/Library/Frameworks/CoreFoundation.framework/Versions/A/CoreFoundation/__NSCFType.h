@interface __NSCFType : NSObject

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (unsigned long long)retainCount;
- (id)retain;
- (id)description;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (oneway void)release;

@end
