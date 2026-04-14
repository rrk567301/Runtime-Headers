@interface GEODefaultsDBArray : GEODefaultsDBCollection

+ (id)dbValue:(id)a0;

- (id)objectForKeyedSubscript:(id)a0;
- (unsigned long long)count;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;

@end
