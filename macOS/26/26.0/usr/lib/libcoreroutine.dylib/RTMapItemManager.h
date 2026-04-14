@class RTLearnedLocationStore, RTMapServiceManager;

@interface RTMapItemManager : RTService

@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;

- (id)init;
- (void).cxx_destruct;
- (void)_fetchMapItemsWithGeoMapItemIdentifiers:(id)a0 source:(unsigned long long)a1 handler:(id /* block */)a2;
- (id)createMapItemFromMapItem:(id)a0;
- (void)fetchMapItemsWithGeoMapItemIdentifiers:(id)a0 source:(unsigned long long)a1 handler:(id /* block */)a2;
- (id)getGeoMapItemIdentiferFromMuid:(unsigned long long)a0 location:(id)a1;
- (id)initWithLearnedLocationStore:(id)a0 MapServiceManager:(id)a1;
- (id)mapItemsFromLocalBluePOIResult:(id)a0 withConfidenceThreshold:(double)a1 error:(id *)a2;
- (id)updateMapItemsFromMapItems:(id)a0 outError:(id *)a1;
- (id)updateMapItemsFromMapItems:(id)a0 source:(unsigned long long)a1 outError:(id *)a2;

@end
