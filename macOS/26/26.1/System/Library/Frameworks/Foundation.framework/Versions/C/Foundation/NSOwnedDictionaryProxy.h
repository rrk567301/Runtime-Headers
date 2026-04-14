@interface NSOwnedDictionaryProxy : NSDictionary {
    id _owner;
}

- (id)initWithOwner:(id)a0;
- (id)retain;
- (oneway void)release;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (id)keyEnumerator;
- (void)superRelease;

@end
