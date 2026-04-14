@class NSArray, FCPurchaseLookupRecordSource;

@interface FCPurchaseLookupFetchOperation : FCFetchOperation

@property (retain, nonatomic) NSArray *purchaseIDs;
@property (retain, nonatomic) FCPurchaseLookupRecordSource *purchaseLookupRecordSource;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (id)_prefixedPurchasedIDs:(id)a0;
- (id)initWithPurchaseIDs:(id)a0 purchaseLookupRecordSource:(id)a1;
- (id)processFetchedResults:(id)a0;

@end
