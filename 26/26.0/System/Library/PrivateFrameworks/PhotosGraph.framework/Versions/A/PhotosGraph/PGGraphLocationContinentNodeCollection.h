@class PGGraphMomentNodeCollection, PGGraphLocationSubcontinentNodeCollection, PGGraphAddressNodeCollection;

@interface PGGraphLocationContinentNodeCollection : PGGraphNamedLocationNodeCollection

@property (readonly, nonatomic) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphLocationSubcontinentNodeCollection *subcontinentNodes;
@property (readonly, nonatomic) unsigned long long numberOfMomentNodes;

+ (Class)nodeClass;

@end
