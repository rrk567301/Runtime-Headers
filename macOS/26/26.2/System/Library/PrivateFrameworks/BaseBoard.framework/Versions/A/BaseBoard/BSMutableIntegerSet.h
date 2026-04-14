@interface BSMutableIntegerSet : BSIntegerSet

- (void)removeAllValues;
- (BOOL)addValue:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeValue:(long long)a0;
- (void)minusSet:(id)a0;
- (void)unionSet:(id)a0;

@end
