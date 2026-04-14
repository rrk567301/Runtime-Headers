@class NSString;

@interface EFInt64Set : NSObject <EFSQLValueCollectionExpressable, NSCopying, NSMutableCopying> {
    struct set<long long, std::less<long long>, std::allocator<long long>> { struct __tree<long long, std::less<long long>, std::allocator<long long>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _underlying;
}

@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) long long firstIndex;
@property (readonly, nonatomic) long long lastIndex;
@property (readonly, copy, nonatomic) NSString *commaSeparatedString;

+ (id)indexSet;
+ (id)indexSetWithIndexesInRange:(struct _EFInt64Range { long long x0; unsigned long long x1; })a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)ef_SQLIsolatedExpression;
- (id)init;
- (id).cxx_construct;
- (void)enumerateIndexesUsingBlock:(id /* block */)a0;
- (void)ef_renderSQLExpressionInto:(id)a0;
- (void)ef_renderSQLExpressionInto:(id)a0 conjoiner:(id)a1;
- (void).cxx_destruct;
- (BOOL)containsIndex:(long long)a0;
- (unsigned long long)getIndexes:(long long *)a0 maxCount:(unsigned long long)a1 inIndexRange:(struct _EFInt64Range { long long x0; unsigned long long x1; } *)a2;
- (long long)indexGreaterThanIndex:(long long)a0;
- (id)indexesInRange:(struct _EFInt64Range { long long x0; unsigned long long x1; })a0;
- (void)_appendRange:(struct _EFInt64Range { long long x0; unsigned long long x1; })a0 toString:(id)a1 withSeparator:(BOOL)a2;
- (unsigned long long)_enumerateIndexesInRange:(struct _EFInt64Range { long long x0; unsigned long long x1; } *)a0 maxCount:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (id)_initWithIndexesInRange:(struct _EFInt64Range { long long x0; unsigned long long x1; })a0;
- (id)_initWithUnderlyingSet:(const void *)a0;
- (struct _EFInt64Range { long long x0; unsigned long long x1; })_lastRange;
- (id)lowestIndexesInRange:(struct _EFInt64Range { long long x0; unsigned long long x1; })a0 maxCount:(unsigned long long)a1;

@end
