@class NSString, RTUserCurationStore;

@interface RTUserCurationManager : RTService <RTPurgable, RTStoreManager>

@property (retain, nonatomic) RTUserCurationStore *userCurationStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)vendedClasses;
+ (long long)periodicPurgePolicy;

- (void)fetchEnumerableObjectsWithOptions:(id)a0 offset:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (void)_addUserCuration:(id)a0 handler:(id /* block */)a1;
- (void)_fetchStoredUserCurationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)addUserCuration:(id)a0 handler:(id /* block */)a1;
- (void)createAndStoreCurationWithEntryDate:(id)a0 exitDate:(id)a1 curatedLabel:(id)a2 handler:(id /* block */)a3;
- (void)createAndStoreCurationWithEntryDate:(id)a0 exitDate:(id)a1 visitIdentifier:(id)a2 originalLabel:(id)a3 curatedLabel:(id)a4 handler:(id /* block */)a5;
- (void)fetchStoredUserCurationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)initWithUserCurationStore:(id)a0;
- (void)purgeUserCurationsPredating:(id)a0 handler:(id /* block */)a1;

@end
