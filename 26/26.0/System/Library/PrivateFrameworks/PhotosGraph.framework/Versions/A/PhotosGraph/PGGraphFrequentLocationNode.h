@class PGGraphFrequentLocationNodeCollection, NSString, NSDateInterval, NSDate, PGGraphAddressNode;

@interface PGGraphFrequentLocationNode : PGGraphOptimizedNode <PGAssetCollectionFeature>

@property (readonly) NSDate *universalStartDate;
@property (readonly) NSDate *universalEndDate;
@property (readonly) NSDateInterval *universalDateInterval;
@property (readonly) PGGraphAddressNode *addressNode;
@property (readonly, nonatomic) PGGraphFrequentLocationNodeCollection *collection;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;
+ (id)addressOfFrequentLocation;
+ (id)momentOfFrequentLocation;

- (unsigned short)domain;
- (id)propertyDictionary;
- (BOOL)hasProperties:(id)a0;
- (id)label;
- (unsigned long long)numberOfMomentNodes;
- (id)name;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;
- (id)initWithUniversalDateInterval:(id)a0;

@end
