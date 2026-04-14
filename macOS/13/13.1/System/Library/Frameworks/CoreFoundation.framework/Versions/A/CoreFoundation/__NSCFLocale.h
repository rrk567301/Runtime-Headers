@interface __NSCFLocale : NSLocale

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (oneway void)release;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)objectForKey:(id)a0;
- (id)_prefForKey:(id)a0;
- (id)displayNameForKey:(id)a0 value:(id)a1;
- (id)initWithLocaleIdentifier:(id)a0;
- (unsigned char)_doesNotRequireSpecialCaseHandling;
- (void)_setDoesNotRequireSpecialCaseHandling;

@end
