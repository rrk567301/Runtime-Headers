@interface BSMutableIntegerSet : BSIntegerSet

- (void)removeAllValues;
- (void)minusSet:(id)a0;
- (void)unionSet:(id)a0;
- (BOOL)addValue:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeValue:(long long)a0;

@end
