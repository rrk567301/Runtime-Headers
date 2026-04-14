@interface EFMutableInt64Set : EFInt64Set

- (void)addIndexes:(id)a0;
- (void)removeIndex:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addIndex:(long long)a0;
- (void)intersectIndexes:(id)a0;
- (void)removeIndexes:(id)a0;
- (void)removeAllIndexes;

@end
