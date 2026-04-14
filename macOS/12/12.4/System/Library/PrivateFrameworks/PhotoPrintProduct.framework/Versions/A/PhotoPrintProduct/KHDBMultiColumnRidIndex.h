@class NSArray;

@interface KHDBMultiColumnRidIndex : KHDBRidIndex {
    NSArray *_indexFields;
    NSArray *_valueSelectors;
}

@property (readonly, retain, nonatomic) NSArray *indexFields;

- (void)dealloc;
- (id)valueForModel:(id)a0;
- (id)valueForModel:(id)a0 replacingValue:(id)a1 forFieldName:(id)a2;
- (id)initWithIndexFields:(id)a0 returnsIdColumn:(id)a1 forIndexEntity:(id)a2;
- (id)initWithIndexFields:(id)a0 forIndexEntity:(id)a1;
- (void)updateIndexForId:(unsigned long long)a0 forValues:(id)a1;

@end
