@class TPSCollectionSection, NSString, NSArray, NSDictionary, TPSCollection, TPSAssetSizes;

@interface TPSContentPackage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSArray *orderedCollectionIdentifiers;
@property (retain, nonatomic) NSArray *savedTipIdentifiers;
@property (retain, nonatomic) NSArray *collectionSections;
@property (retain, nonatomic) NSDictionary *userGuideMap;
@property (retain, nonatomic) NSDictionary *collectionSectionMap;
@property (retain, nonatomic) NSDictionary *collectionMap;
@property (retain, nonatomic) NSDictionary *tipMap;
@property (retain, nonatomic) TPSAssetSizes *assetSizes;
@property (retain, nonatomic) NSArray *featuredCollections;
@property (retain, nonatomic) TPSCollection *userGuideCollection;
@property (retain, nonatomic) TPSCollectionSection *mainCollectionSection;
@property (readonly, nonatomic) NSArray *orderedCollections;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasTipContent;
- (void)setFeaturedCollection:(id)a0;
- (void)updateOrderedCollectionIdentifiers;

@end
