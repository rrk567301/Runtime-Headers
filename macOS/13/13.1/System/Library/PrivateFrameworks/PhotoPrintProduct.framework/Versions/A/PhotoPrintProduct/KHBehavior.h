@class NSString, NSArray;

@interface KHBehavior : KHModel <KHJSONGeneratorProtocol> {
    long long _traitId;
    long long _categoryId;
    NSString *_name;
    NSString *_condition;
    BOOL _conditionParsed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *componentArrayLeft;
@property (retain, nonatomic) NSArray *componentArrayRight;
@property (retain, nonatomic) NSString *comparator;

+ (id)behaviorForKey:(long long)a0 fromDatabase:(id)a1;
+ (id)generateModelFromJSON:(id)a0 inDatabase:(id)a1 bundlePath:(id)a2;
+ (id)modifyModelFromJSON:(id)a0 inDatabase:(id)a1 bundlePath:(id)a2;

- (void)dealloc;
- (id)name;
- (void)setName:(id)a0;
- (id)attributes;
- (void)remove;
- (id)condition;
- (id)attributeForKey:(id)a0;
- (void)setCondition:(id)a0;
- (long long)categoryId;
- (void)setCategoryId:(long long)a0;
- (id)JSONRepresentation;
- (BOOL)isSimilarToModel:(id)a0 skippingFields:(id)a1 differences:(id *)a2;
- (long long)traitId;
- (void)cacheTraitId:(long long)a0;
- (void)setTraitId:(long long)a0;
- (void)cacheCategoryId:(long long)a0;
- (void)cacheName:(id)a0;
- (void)cacheCondition:(id)a0;
- (void)notateAttributeAddition:(id)a0;
- (void)_parseCondition;

@end
