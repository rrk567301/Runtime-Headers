@class NSArray, NSMutableDictionary, ICURLAggregatedPerformanceMetrics, NSDate, NSMutableArray;

@interface MPStoreItemMetadataResponse : NSObject <NSCopying> {
    NSMutableDictionary *_itemIdentifierToStoreItemMetadata;
    NSMutableArray *_allStoreItemDictionaries;
}

@property (nonatomic, getter=isFinalResponse) BOOL finalResponse;
@property (copy, nonatomic) NSArray *cacheMissItemIdentifiers;
@property (copy, nonatomic) NSArray *requestItemIdentifiers;
@property (copy, nonatomic) NSArray *lastBatchItemIdentifiers;
@property (readonly, copy, nonatomic) NSArray *allStoreItemDictionaries;
@property (retain, nonatomic) ICURLAggregatedPerformanceMetrics *performanceMetrics;
@property (readonly, copy, nonatomic) NSArray *itemIdentifiers;
@property (readonly, copy, nonatomic) NSDate *earliestExpirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)storeItemMetadataForItemIdentifier:(id)a0;
- (id)storeItemMetadataForItemIdentifier:(id)a0 returningIsFinalMetadata:(BOOL *)a1;
- (void)setStoreItemMetadata:(id)a0 forItemIdentifier:(id)a1;

@end
