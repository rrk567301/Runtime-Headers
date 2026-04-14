@class PGGraph, MABinaryAdjacency, PGGraphAddressNodeCollection;

@interface PGGraphLocationHelper : NSObject {
    PGGraph *_graph;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _locationHelperLock;
    MABinaryAdjacency *_countryNodesByLocationNode;
    MABinaryAdjacency *_stateNodesByLocationNode;
    MABinaryAdjacency *_countyNodesByLocationNode;
    MABinaryAdjacency *_cityNodesByLocationNode;
    MABinaryAdjacency *_districtNodesByLocationNode;
    MABinaryAdjacency *_streetNodesByLocationNode;
    MABinaryAdjacency *_numberNodesByLocationNode;
    MABinaryAdjacency *_locationNodesByCountryNode;
    MABinaryAdjacency *_locationNodesByStateNode;
    MABinaryAdjacency *_locationNodesByCountyNode;
    MABinaryAdjacency *_locationNodesByCityNode;
    MABinaryAdjacency *_locationNodesByDistrictNode;
    MABinaryAdjacency *_locationNodesByStreetNode;
    MABinaryAdjacency *_locationNodesByNumberNode;
    MABinaryAdjacency *_addressNodesByAreaNode;
    MABinaryAdjacency *_momentNodesByAddressNode;
    PGGraphAddressNodeCollection *_addressNodes;
}

+ (id)inefficientLocationHelper;

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0;
- (id)addressNodes;
- (id)closestLocationNodeFromLocationNode:(id)a0 withDimension:(unsigned long long)a1 remapMatchingDimensionBlock:(id /* block */)a2;
- (id)closestLocationNodeFromLocationNode:(id)a0 withDimension:(unsigned long long)a1 reverse:(BOOL)a2;
- (id)_closestLocationNodeFromLocationNode:(id)a0 withDimension:(unsigned long long)a1 remapMatchingDimensionBlock:(id /* block */)a2 reverse:(BOOL)a3;
- (id)relevantLocationNodesForMomentNodes:(id)a0 applyDensestCloseLocationNode:(BOOL)a1;
- (id)relevantAddressNodesForMomentNodes:(id)a0 applyDensestCloseLocationNode:(BOOL)a1;
- (BOOL)locationIsInSupersetCategoryForLocationNode:(id)a0;
- (id)densestCloseLocationNodeFromLocationNode:(id)a0 withDateInterval:(id)a1 locationMask:(unsigned long long)a2;
- (id)commonLocationNodeForRelevantLocationNodes:(id)a0 locationMask:(unsigned long long)a1;
- (BOOL)_locationNodesRepresentSameCity:(id)a0;
- (id)_mostVisitedLocationNodeForLocationNodes:(id)a0;
- (id)_commonNodeForLocationNode:(id)a0 andLocationNode:(id)a1;
- (struct CLLocationCoordinate2D { double x0; double x1; })_approximateCoordinateForLocationNode:(id)a0;
- (id)_validLocationNodeForLocationNode:(id)a0 withLocationMask:(unsigned long long)a1;
- (id)districtNodeFromAddressNode:(id)a0;
- (id)cityNodeFromAddressNode:(id)a0;
- (id)countryNodeFromAddressNode:(id)a0;
- (id)countyNodeFromCityNode:(id)a0;
- (void)_fetchLocationNodesByCountryNode;
- (id)locationNodesByCountryNode;
- (id)countryNodesByLocationNode;
- (void)_fetchLocationNodesByStateNode;
- (id)locationNodesByStateNode;
- (id)stateNodesByLocationNode;
- (void)_fetchLocationNodesByCountyNode;
- (id)locationNodesByCountyNode;
- (id)countyNodesByLocationNode;
- (void)_fetchLocationNodesByCityNode;
- (id)locationNodesByCityNode;
- (id)cityNodesByLocationNode;
- (void)_fetchLocationNodesByDistrictNode;
- (id)locationNodesByDistrictNode;
- (id)districtNodesByLocationNode;
- (void)_fetchLocationNodesByStreetNode;
- (id)locationNodesByStreetNode;
- (id)streetNodesByLocationNode;
- (void)_fetchLocationNodesByNumberNode;
- (id)locationNodesByNumberNode;
- (id)numberNodesByLocationNode;
- (void)_fetchAddressNodes;
- (id)addressNodesByAreaNode;
- (id)momentNodesByAddressNode;
- (id)_parentLocationNodeWithDimension:(unsigned long long)a0 ofLocationNode:(id)a1;
- (id)_parentLocationNodeWithDimension:(unsigned long long)a0 ofLocationNodeAsCollection:(id)a1;
- (id)_parentLocationNodeWithDimension:(unsigned long long)a0 sourceLocationNodeAsCollection:(id)a1 sourceLabel:(id)a2;
- (id)addressNodesFromAreaNodes:(id)a0;
- (id)addressNodesFromLocationNodes:(id)a0;
- (id)momentNodesByAddressNodeIntersectingAddressNodes:(id)a0;
- (id)countryNodeFromAddressNodeAsCollection:(id)a0;

@end
