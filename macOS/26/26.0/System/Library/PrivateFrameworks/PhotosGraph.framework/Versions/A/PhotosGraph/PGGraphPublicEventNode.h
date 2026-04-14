@class PPNamedEntity, MARelation, NSString, PGGraphBusinessNode, PHPublicEventInfo, NSSet, PGGraphPublicEventNodeCollection;

@interface PGGraphPublicEventNode : PGGraphOptimizedNode <PGGraphPortraitNamedEntity, PGAssetCollectionFeature>

@property (class, readonly, nonatomic) MARelation *momentOfPublicEvent;
@property (class, readonly, nonatomic) MARelation *categoryOfPublicEvent;
@property (class, readonly, nonatomic) MARelation *performerOfPublicEvent;
@property (class, readonly, nonatomic) MARelation *businessOfPublicEvent;

@property (readonly, nonatomic) PHPublicEventInfo *publicEventInfo;
@property (readonly, nonatomic) PPNamedEntity *pg_namedEntity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) PGGraphBusinessNode *businessNode;
@property (readonly, nonatomic) NSSet *categories;
@property (readonly, nonatomic) NSSet *localizedCategories;
@property (readonly, nonatomic) NSSet *preciseLocalizedCategoryNames;
@property (readonly, nonatomic) PGGraphPublicEventNodeCollection *collection;
@property (readonly, copy, nonatomic) NSSet *performers;
@property (readonly, nonatomic) long long expectedAttendance;
@property (readonly, nonatomic) BOOL canUseWithoutBusiness;
@property (readonly, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) BOOL supportsEventExperience;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;
+ (id)unsupportedCategoriesForTitles;

- (unsigned short)domain;
- (id)propertyDictionary;
- (BOOL)hasProperties:(id)a0;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(id /* block */)a0;
- (int)_eventInfoCategory;
- (id)associatedNodesForRemoval;
- (void)enumerateLocalizedSubcategoryNodesUsingBlock:(id /* block */)a0;
- (void)enumeratePerformerEdgesAndNodesUsingBlock:(id /* block */)a0;
- (void)enumeratePerformerNodesUsingBlock:(id /* block */)a0;
- (void)enumeratePublicEventCategoryEdgesAndNodesUsingBlock:(id /* block */)a0;
- (void)enumeratePublicEventCategoryNodesUsingBlock:(id /* block */)a0;
- (id)initWithMUID:(unsigned long long)a0 name:(id)a1 expectedAttendance:(long long)a2 publicEventIdentifier:(id)a3;
- (id)keywordDescription;

@end
