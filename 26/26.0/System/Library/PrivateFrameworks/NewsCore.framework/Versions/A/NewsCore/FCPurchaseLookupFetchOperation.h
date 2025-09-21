@class NSArray;
@protocol FCContentContext;

@interface FCPurchaseLookupFetchOperation : FCFetchOperation

@property (retain, nonatomic) NSArray *purchaseIDs;
@property (retain, nonatomic) id<FCContentContext> contentContext;

- (void)performOperation;
- (id)processFetchedResults:(id)a0 error:(id)a1;
- (id)initWithPurchaseIDs:(id)a0 contentContext:(id)a1;
- (id)init;
- (id)_prefixedPurchasedIDs:(id)a0;
- (void).cxx_destruct;

@end
