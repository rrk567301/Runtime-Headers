@class MARelation, PGGraphHomeWorkNodeCollection, NSString, MANodeFilter;

@interface PGGraphHomeWorkNode : PGGraphOptimizedNode <PGGraphLocalizable, PGAssetCollectionFeature> {
    NSString *_uuid;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _centroidCoordinate;
    NSString *_label;
}

@property (class, readonly, nonatomic) MANodeFilter *homeFilter;
@property (class, readonly, nonatomic) MANodeFilter *workFilter;
@property (class, readonly, nonatomic) MARelation *ownerOfHomeWork;
@property (class, readonly, nonatomic) MARelation *addressOfHomeWork;

@property (readonly, nonatomic) PGGraphHomeWorkNodeCollection *collection;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;

+ (id)filter;

- (id)propertyDictionary;
- (struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
- (BOOL)hasProperties:(id)a0;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)label;
- (void).cxx_destruct;
- (BOOL)isHome;
- (id)initWithLabel:(id)a0 uuid:(id)a1;

@end
