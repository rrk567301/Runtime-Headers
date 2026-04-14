@interface __MRCCFType : NSObject

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (unsigned long long)_cfTypeID;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)retain;
- (unsigned long long)retainCount;
- (id)description;
- (oneway void)release;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
