@interface __NSCFLocale : NSLocale

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (char)automaticallyNotifiesObserversForKey:(id)a0;

- (char)_isDeallocating;
- (oneway void)release;
- (char)_tryRetain;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (id)displayNameForKey:(id)a0 value:(id)a1;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)objectForKey:(id)a0;

@end
