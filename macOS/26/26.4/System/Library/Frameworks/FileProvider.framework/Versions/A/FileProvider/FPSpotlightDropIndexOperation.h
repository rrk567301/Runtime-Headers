@class NSString, CSSearchableIndex, FPSpotlightIndexer;
@protocol FPSpotlightDropIndexDelegate;

@interface FPSpotlightDropIndexOperation : FPOperation {
    FPSpotlightIndexer *_indexer;
    id<FPSpotlightDropIndexDelegate> _delegate;
    CSSearchableIndex *_index;
    NSString *_spotlightDomainIdentifier;
    unsigned long long _dropReason;
}

+ (void)deleteSearchableItemsAndClearClientStateWithDomainIdentifier:(id)a0 index:(id)a1 dropReason:(unsigned long long)a2 delegate:(id)a3 completionHandler:(id /* block */)a4;

- (void)main;
- (id)operationDescription;
- (void).cxx_destruct;
- (id)initWithIndexer:(id)a0 index:(id)a1 spotlightDomainIdentifier:(id)a2 dropReason:(unsigned long long)a3 delegate:(id)a4;

@end
