@interface NSOwnedDictionaryProxy : NSDictionary {
    id _owner;
}

- (id)initWithOwner:(id)a0;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (id)retain;
- (id)keyEnumerator;
- (oneway void)release;
- (void)superRelease;

@end
