@interface __NSCFLocale : NSLocale

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (id)initWithLocaleIdentifier:(id)a0;
- (unsigned long long)hash;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)displayNameForKey:(id)a0 value:(id)a1;
- (BOOL)_tryRetain;
- (id)objectForKey:(id)a0;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;

@end
