@interface __MRCCFType : NSObject

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (unsigned long long)retainCount;
- (unsigned long long)_cfTypeID;
- (id)retain;
- (id)description;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (oneway void)release;

@end
