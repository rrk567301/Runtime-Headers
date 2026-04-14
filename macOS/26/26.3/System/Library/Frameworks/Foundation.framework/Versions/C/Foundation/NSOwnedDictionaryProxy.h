@interface NSOwnedDictionaryProxy : NSDictionary {
    id _owner;
}

- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (id)retain;
- (id)keyEnumerator;
- (id)initWithOwner:(id)a0;
- (oneway void)release;
- (void)superRelease;

@end
