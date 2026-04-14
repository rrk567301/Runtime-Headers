@interface __NSCFLocale : NSLocale

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)displayNameForKey:(id)a0 value:(id)a1;
- (unsigned long long)retainCount;
- (id)objectForKey:(id)a0;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)initWithLocaleIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (oneway void)release;

@end
