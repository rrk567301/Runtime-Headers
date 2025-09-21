@interface __NSDictionary0 : NSDictionary

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)getObjects:(id *)a0 andKeys:(id *)a1 count:(unsigned long long)a2;
- (id)autorelease;
- (void)dealloc;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)copy;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (id)objectEnumerator;
- (id)keyEnumerator;
- (oneway void)release;

@end
