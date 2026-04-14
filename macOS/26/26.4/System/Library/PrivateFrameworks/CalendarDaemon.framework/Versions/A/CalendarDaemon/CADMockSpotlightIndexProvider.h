@class NSData, NSString, NSMutableArray;

@interface CADMockSpotlightIndexProvider : NSObject <CADSpotlightIndexProvider> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_store;
    unsigned long long _failureMode;
}

@property (nonatomic) long long numCalls;
@property (nonatomic) double minArtificialDelay;
@property (nonatomic) double maxArtificialDelay;
@property (copy, nonatomic) id /* block */ failureCallback;
@property (nonatomic) BOOL failDeleteSearchableItemsWithDomainIdentifiers;
@property (nonatomic) BOOL failIndexSearchableItems;
@property (nonatomic) BOOL failDeleteAllSearchableItemsForBundleID;
@property (copy, nonatomic) id /* block */ batchAPIMisuseCallback;
@property (retain, nonatomic) NSData *clientState;
@property (nonatomic) BOOL donateCalendars;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)setFailureMode:(unsigned long long)a0;
- (BOOL)_incrementAndCheckIfShouldFailCall;
- (void)deleteAllSearchableItemsForBundleID:(id)a0;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0;
- (void)indexSearchableItems:(id)a0;
- (id)initWithMinArtificialDelay:(double)a0 maxArtificialDelay:(double)a1 failureMode:(unsigned long long)a2;
- (id)itemsInIndex;
- (id)itemsInIndexPassingTest:(id /* block */)a0;
- (id)newSpotlightIndexForBundleID:(id)a0;

@end
