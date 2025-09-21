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

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)valueAtIndex:(unsigned long long)a0;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_dictionary;
- (unsigned long long)count;
- (id)_allValues;
- (id)description;
- (long long)propertyType;
- (id)primaryIdentifier;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)labelAtIndex:(unsigned long long)a0;
- (id)identifierAtIndex:(unsigned long long)a0;
- (id)_allIdentifiers;
- (id)_allIdentifiersWithPrimaryFirst;
- (id)initWithManagedObject:(id)a0 property:(id)a1;
- (id)_allLabels;
- (id)_filter:(id /* block */)a0;
- (unsigned long long)_indexOfSimilarValue:(id)a0 property:(id)a1;
- (unsigned long long)_indexOfValue:(id)a0;
- (unsigned long long)_indexOfValue:(id)a0 property:(id)a1;
- (unsigned long long)_indexOfValuePassingTest:(id /* block */)a0;
- (id)_initWithDictionary:(id)a0 andValueType:(long long)a1;
- (id)_initWithIdentifiers:(id)a0 values:(id)a1 labels:(id)a2 primaryIdentifier:(id)a3;
- (id)_labelForIdentifier:(id)a0;
- (id)_map:(id /* block */)a0;
- (void)_setPrimaryIdentifier:(id)a0;
- (BOOL)applyToManagedObject:(id)a0 withProperty:(id)a1;
- (BOOL)containsValue:(id)a0 forLabel:(id)a1;
- (unsigned long long)indexForIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0 compareIdentifiers:(BOOL)a1;
- (id)labelForIdentifier:(id)a0;
- (id)valueForIdentifier:(id)a0;

@end
