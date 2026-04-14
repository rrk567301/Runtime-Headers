@interface NSOwnedDictionaryProxy : NSDictionary {
    id _owner;
}

- (id)retain;
- (oneway void)release;
- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (void)superRelease;
- (id)initWithOwner:(id)a0;

@end
