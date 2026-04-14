@interface _NSNestedDictionary : NSMutableDictionary {
    id _locals;
    id _bindings;
}

- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (id)objectEnumerator;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;

@end
