@interface __NSDictionary0 : NSDictionary

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)copy;
- (unsigned long long)count;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)objectForKey:(id)a0;
- (id)retain;
- (void)getObjects:(id *)a0 andKeys:(id *)a1 count:(unsigned long long)a2;
- (id)init;
- (id)keyEnumerator;
- (id)objectEnumerator;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;

@end
