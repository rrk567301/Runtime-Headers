@interface _NSNestedDictionary : NSMutableDictionary {
    id _locals;
    id _bindings;
}

- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (id)objectEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;

@end
