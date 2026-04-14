@interface NSMutableDictionary : NSDictionary

+ (id)MI_dictionaryWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (id)dictionaryWithCapacity:(unsigned long long)a0;
+ (id)dictionaryWithSharedKeySet:(id)a0;

- (void)setValue:(id)a0 forKey:(id)a1;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithContentsOfURL:(id)a0;
- (Class)classForCoder;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)__swift_objectForKeyedSubscript:(id)a0;
- (void)__swift_setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)takeValue:(id)a0 forKey:(id)a1;
- (void)takeStoredValue:(id)a0 forKey:(id)a1;
- (void)_web_setInt:(int)a0 forKey:(id)a1;
- (void)_web_setBool:(BOOL)a0 forKey:(id)a1;
- (void)_web_setObject:(id)a0 forUncopiedKey:(id)a1;
- (void)_SFL_setObjectOrNil:(id)a0 forKey:(id)a1;
- (void)_SFL_setTimeInterval:(double)a0 forKey:(id)a1;
- (void)_SFL_removeNSNullValues;
- (void)_mutate;
- (void)removeAllObjects;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)invert;
- (void)addEntriesFromDictionary:(id)a0;
- (void)addObject:(id)a0 forKey:(id)a1;
- (void)addObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void)addObjects:(id)a0 forKeys:(id)a1;
- (void)removeEntriesInDictionary:(id)a0;
- (void)removeEntriesWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)removeEntriesPassingTest:(id /* block */)a0;
- (void)removeKeysForObject:(id)a0;
- (void)removeObjectsForKeys:(id)a0;
- (void)replaceObject:(id)a0 forKey:(id)a1;
- (void)replaceObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void)replaceObjects:(id)a0 forKeys:(id)a1;
- (void)setEntriesFromDictionary:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void)setObjects:(id)a0 forKeys:(id)a1;
- (void)setDictionary:(id)a0;
- (void)__addObject:(id)a0 forKey:(id)a1;
- (void)__setObject:(id)a0 forKey:(id)a1;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;

@end
