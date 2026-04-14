@class SFMutableResultSection, NSSet, FPSearchOnServerEnumerator, NSObject;
@protocol OS_dispatch_queue;

@interface SPFileProviderServerQuery : SPKQuery

@property (retain) SFMutableResultSection *fpServerSection;
@property (retain) NSSet *filterTypes;
@property (retain) NSSet *domainIDs;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) FPSearchOnServerEnumerator *enumerator;

+ (id)fpDomainFilterWithDomain:(id)a0;
+ (unsigned int)searchDomain;
+ (id)searchInFileProvidersResults:(id)a0 query:(id)a1 queryId:(unsigned long long)a2;
+ (int)sourceKind;

- (id)createActivity;
- (void)_cancel;
- (void).cxx_destruct;
- (void)_start;
- (void)_cleanupContentTypeOnResult:(id)a0;
- (id)_containingAppBundleID;
- (void)_updateFilterTypes;
- (void)beginQuerySignpostInterval;
- (void)endQuerySignpostInterval;
- (void)handleEnumeratorResults:(id)a0 hasMore:(BOOL)a1;
- (id)initWithUserQuery:(id)a0 queryGroupId:(unsigned long long)a1 options:(unsigned long long)a2 queryContext:(id)a3;
- (void)queryResponseReceivedSignpostEvent:(id)a0;
- (BOOL)shouldReturnEarly;
- (id)spResultFromFPSearchOnServerResult:(id)a0;

@end
