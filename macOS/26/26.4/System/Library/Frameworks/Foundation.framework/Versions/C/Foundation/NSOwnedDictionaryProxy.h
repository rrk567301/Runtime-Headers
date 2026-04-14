@interface NSOwnedDictionaryProxy : NSDictionary {
    id _owner;
}

- (id)objectForKey:(id)a0;
- (id)initWithOwner:(id)a0;
- (id)retain;
- (unsigned long long)count;
- (id)keyEnumerator;
- (oneway void)release;
- (void)superRelease;

@end
