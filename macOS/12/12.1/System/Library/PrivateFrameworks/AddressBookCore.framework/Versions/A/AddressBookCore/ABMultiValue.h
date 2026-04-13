@class NSString, NSMutableArray;

@interface ABMultiValue : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration> {
    NSMutableArray *_identifiers;
    NSMutableArray *_labels;
    NSMutableArray *_values;
    NSString *_primaryIdentifier;
}

+ (void)initialize;
+ (id)_generateIdentifier;
+ (id)newWithManagedObject:(id)a0 property:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopy;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)_dictionary;
- (id)labelAtIndex:(unsigned long long)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (long long)propertyType;
- (id)primaryIdentifier;
- (id)identifierAtIndex:(unsigned long long)a0;
- (id)initWithManagedObject:(id)a0 property:(id)a1;
- (id)_allIdentifiersWithPrimaryFirst;
- (id)labelForIdentifier:(id)a0;
- (id)valueForIdentifier:(id)a0;
- (BOOL)containsValue:(id)a0 forLabel:(id)a1;
- (unsigned long long)indexForIdentifier:(id)a0;
- (id)_allValues;
- (BOOL)isEqual:(id)a0 compareIdentifiers:(BOOL)a1;
- (id)_map:(id /* block */)a0;
- (BOOL)applyToManagedObject:(id)a0 withProperty:(id)a1;
- (void)_setPrimaryIdentifier:(id)a0;
- (id)_initWithIdentifiers:(id)a0 values:(id)a1 labels:(id)a2 primaryIdentifier:(id)a3;
- (unsigned long long)_indexOfValue:(id)a0 property:(id)a1;
- (unsigned long long)_indexOfValuePassingTest:(id /* block */)a0;
- (id)_initWithDictionary:(id)a0 andValueType:(long long)a1;
- (id)_allLabels;
- (id)_allIdentifiers;
- (unsigned long long)_indexOfValue:(id)a0;
- (unsigned long long)_indexOfSimilarValue:(id)a0 property:(id)a1;
- (id)_labelForIdentifier:(id)a0;
- (id)_filter:(id /* block */)a0;

@end
