@interface __NSCFLocale : NSLocale

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)hash;
- (id)initWithLocaleIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (id)objectForKey:(id)a0;
- (oneway void)release;
- (id)displayNameForKey:(id)a0 value:(id)a1;

@end
