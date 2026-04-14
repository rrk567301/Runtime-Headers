@interface __NSCFLocale : NSLocale

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)_tryRetain;
- (id)objectForKey:(id)a0;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (id)displayNameForKey:(id)a0 value:(id)a1;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)retain;
- (unsigned long long)hash;
- (oneway void)release;
- (unsigned long long)retainCount;

@end
