@class RTMapItemProviderCurrentPOIParameters, NSString, RTPlaceInferenceQueryStore, RTVisitStore;

@interface RTMapItemProviderCurrentPOI : RTMapItemProviderBase <RTMapItemProvider>

@property (readonly, nonatomic) RTPlaceInferenceQueryStore *placeInferenceQueryStore;
@property (readonly, nonatomic) RTVisitStore *visitStore;
@property (readonly, copy, nonatomic) RTMapItemProviderCurrentPOIParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)skipForOptions:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 placeInferenceQueryStore:(id)a2 visitStore:(id)a3 parameters:(id)a4;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 placeInferenceQueryStore:(id)a2 visitStore:(id)a3;
- (id)mapItemsWithOptions:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
