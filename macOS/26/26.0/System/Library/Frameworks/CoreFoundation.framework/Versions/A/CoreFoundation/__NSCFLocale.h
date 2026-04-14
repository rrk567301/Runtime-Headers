@interface __NSCFLocale : NSLocale

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)_isDeallocating;
- (id)objectForKey:(id)a0;
- (BOOL)_tryRetain;
- (id)retain;
- (unsigned long long)retainCount;
- (id)initWithLocaleIdentifier:(id)a0;
- (oneway void)release;
- (id)displayNameForKey:(id)a0 value:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
