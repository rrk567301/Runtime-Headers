@class RTPlaceInferenceQueryStore, NSString, RTMapItemProviderPOIHistoryParameters;

@interface RTMapItemProviderPOIHistory : RTMapItemProviderBase <RTMapItemProvider>

@property (retain, nonatomic) RTPlaceInferenceQueryStore *placeInferenceQueryStore;
@property (readonly, copy, nonatomic) RTMapItemProviderPOIHistoryParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)skipForOptions:(id)a0 error:(id *)a1;
- (id)init;
- (id)mapItemsWithOptions:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 placeInferenceQueryStore:(id)a2;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 placeInferenceQueryStore:(id)a2 parameters:(id)a3;

@end
