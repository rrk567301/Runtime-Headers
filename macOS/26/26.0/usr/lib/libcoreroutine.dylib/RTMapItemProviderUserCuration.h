@class NSString, RTVisitStore, RTUserCurationStore, RTMapItemProviderUserCurationParameters;

@interface RTMapItemProviderUserCuration : RTMapItemProviderBase <RTMapItemProvider>

@property (readonly, nonatomic) RTUserCurationStore *userCurationStore;
@property (readonly, nonatomic) RTVisitStore *visitStore;
@property (readonly, copy, nonatomic) RTMapItemProviderUserCurationParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)skipForOptions:(id)a0 error:(id *)a1;
- (id)init;
- (id)mapItemsWithOptions:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 userCurationStore:(id)a2 visitStore:(id)a3;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 userCurationStore:(id)a2 visitStore:(id)a3 parameters:(id)a4;

@end
