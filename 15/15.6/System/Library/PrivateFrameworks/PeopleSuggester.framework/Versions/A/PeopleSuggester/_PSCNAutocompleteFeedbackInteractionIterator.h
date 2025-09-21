@class NSSet, _CDInteractionStore, _CDInteraction, NSDate, NSArray;

@interface _PSCNAutocompleteFeedbackInteractionIterator : NSEnumerator {
    _CDInteractionStore *_interactionStore;
    NSSet *_bundleIds;
    unsigned long long _batchSize;
    NSDate *_startDate;
    NSDate *_endDate;
    _CDInteraction *_lastItem;
    NSArray *_results;
    long long _resultsIndex;
    long long _resultsBatch;
    char _isExhausted;
}

- (void).cxx_destruct;
- (id)nextObject;
- (void)fetchResults;
- (id)fastForwardToDate:(id)a0;
- (id)initWithInteractionStore:(id)a0 bundleIds:(id)a1 startDate:(id)a2 batchSize:(unsigned long long)a3;

@end
