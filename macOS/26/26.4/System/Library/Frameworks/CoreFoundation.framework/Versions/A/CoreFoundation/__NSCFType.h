@interface __NSCFType : NSObject

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)hash;
- (id)description;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;

@end
