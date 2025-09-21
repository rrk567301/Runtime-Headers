@class NSString, NSError, FKInsightsRowViewModelCollection;

@interface FinanceKitUI.InsightsFetchController : NSObject {
    void /* unknown type, empty encoding */ store;
}

+ (id)makeFetchController;

- (id)init;
- (void).cxx_destruct;
- (void)fetchRowViewModelsForTransactionWithIdentifier:(NSString *)a0 primaryAccountIdentifier:(NSString *)a1 completionHandler:(void (^)(FKInsightsRowViewModelCollection *, NSError *))a2;
- (void)pruneRowViewModelsForTransactionWithIdentifier:(NSString *)a0 primaryAccountIdentifier:(NSString *)a1 completionHandler:(void (^)(BOOL, NSError *))a2;

@end
