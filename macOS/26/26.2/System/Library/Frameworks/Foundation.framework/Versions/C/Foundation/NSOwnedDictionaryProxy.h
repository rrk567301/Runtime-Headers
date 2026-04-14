@interface NSOwnedDictionaryProxy : NSDictionary {
    id _owner;
}

- (id)retain;
- (unsigned long long)count;
- (id)initWithOwner:(id)a0;
- (id)objectForKey:(id)a0;
- (oneway void)release;
- (id)keyEnumerator;
- (void)superRelease;

@end
