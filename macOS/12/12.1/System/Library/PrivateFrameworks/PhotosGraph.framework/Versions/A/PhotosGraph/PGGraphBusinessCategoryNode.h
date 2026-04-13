@class NSString, PGGraphBusinessCategoryNodeCollection, MARelation;

@interface PGGraphBusinessCategoryNode : PGGraphPropertylessNode <PGGraphLocalizable> {
    NSString *_label;
}

@property (class, readonly) MARelation *businessOfCategory;

@property (readonly, nonatomic) PGGraphBusinessCategoryNodeCollection *collection;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;
+ (id)filterWithCategory:(id)a0;
+ (id)filterWithCategories:(id)a0;

- (unsigned short)domain;
- (void).cxx_destruct;
- (id)label;
- (id)initWithLabel:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;

@end
