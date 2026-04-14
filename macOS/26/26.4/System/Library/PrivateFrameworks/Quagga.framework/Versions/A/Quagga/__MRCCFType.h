@interface __MRCCFType : NSObject

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (unsigned long long)_cfTypeID;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)hash;
- (id)description;
- (oneway void)release;
- (unsigned long long)retainCount;

@end
