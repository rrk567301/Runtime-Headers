@interface __MRCCFType : NSObject

+ (char)automaticallyNotifiesObserversForKey:(id)a0;

- (char)_isDeallocating;
- (oneway void)release;
- (char)_tryRetain;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (unsigned long long)_cfTypeID;

@end
