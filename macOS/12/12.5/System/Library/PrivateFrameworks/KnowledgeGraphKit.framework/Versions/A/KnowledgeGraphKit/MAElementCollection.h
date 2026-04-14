@class NSSet, MAGraphReference, KGElementIdentifierSet;
@protocol MAGraphProxy;

@interface MAElementCollection : NSObject <NSCopying>

@property (readonly) MAGraphReference *graphReference;
@property (readonly) id<MAGraphProxy> graph;
@property (readonly, nonatomic) KGElementIdentifierSet *elementIdentifiers;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSSet *labels;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)set;
- (void).cxx_destruct;
- (id)array;
- (id)sortedArrayUsingDescriptors:(id)a0;
- (id)initWithGraph:(id)a0;
- (id)initWithGraph:(id)a0 elementIdentifiers:(id)a1;
- (id)initWithSet:(id)a0 graph:(id)a1;
- (id)collectionByIntersecting:(id)a0;
- (id)temporarySet;
- (BOOL)intersectsCollection:(id)a0;
- (id)initWithArray:(id)a0 graph:(id)a1;
- (void)enumerateIdentifiersAsCollectionsWithBlock:(id /* block */)a0;
- (id)collectionByFormingUnionWith:(id)a0;
- (id)filteredCollectionUsingBlock:(id /* block */)a0;
- (id)collectionBySubtracting:(id)a0;
- (void)enumerateStringPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (id)temporaryArray;
- (void)enumerateUnsignedIntegerPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)containsCollection:(id)a0;
- (BOOL)isSubsetOfCollection:(id)a0;
- (void)enumerateDoublePropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateIntegerPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithGraphReference:(id)a0 elementIdentifiers:(id)a1;
- (id)_anyElement;
- (void)_enumerateUsingBlock:(id /* block */)a0;

@end
