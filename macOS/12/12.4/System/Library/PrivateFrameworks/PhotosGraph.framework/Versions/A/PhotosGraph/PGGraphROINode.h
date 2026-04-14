@class NSString, NSArray, MANodeFilter, PGGraphROINodeCollection;

@interface PGGraphROINode : PGGraphPropertylessNode <PGGraphPortraitTopic, PGGraphLocalizable, PGGraphSynonymSupport, PGAssetCollectionFeature> {
    NSString *_label;
}

@property (class, readonly) MANodeFilter *urbanFilter;
@property (class, readonly) MANodeFilter *beachFilter;
@property (class, readonly) MANodeFilter *mountainFilter;
@property (class, readonly) MANodeFilter *natureFilter;
@property (class, readonly) MANodeFilter *waterFilter;

@property (readonly, nonatomic) NSString *pg_topic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PGGraphROINodeCollection *collection;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *localizedSynonyms;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;

+ (id)filter;
+ (id)_localizationKeyForROINode:(id)a0;
+ (id)filterForTypes:(id)a0;
+ (id)validROILabels;
+ (id)momentOfROI;

- (unsigned short)domain;
- (void).cxx_destruct;
- (id)label;
- (id)initWithLabel:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;

@end
