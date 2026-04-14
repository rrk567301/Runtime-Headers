@class NSString, PGGraphPetNodeCollection, MARelation;

@interface PGGraphPetNode : PGGraphOptimizedNode <PGAssetCollectionFeature> {
    NSString *_localIdentifier;
    unsigned long long _petSpecies;
}

@property (class, readonly) MARelation *momentOfPet;

@property (readonly, nonatomic) PGGraphPetNodeCollection *collection;
@property (readonly, nonatomic) unsigned long long petSpecies;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;
+ (id)ownerOfPet;
+ (id)stringFromPetSpecies:(unsigned long long)a0;

- (void).cxx_destruct;
- (unsigned short)domain;
- (id)label;
- (BOOL)hasProperties:(id)a0;
- (void)enumerateOwnerNodesUsingBlock:(id /* block */)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)initWithLocalIdentifier:(id)a0 petSpecies:(unsigned long long)a1 name:(id)a2;
- (id)ownerNodes;
- (id)propertyDictionary;

@end
