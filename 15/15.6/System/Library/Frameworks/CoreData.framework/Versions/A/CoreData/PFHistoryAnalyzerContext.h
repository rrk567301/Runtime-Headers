@class NSMutableDictionary, NSArray, NSMutableSet, NSPersistentHistoryToken, PFHistoryAnalyzerOptions;

@interface PFHistoryAnalyzerContext : NSObject {
    char _isFinished;
    PFHistoryAnalyzerOptions *_options;
    NSMutableDictionary *_objectIDToState;
    NSArray *_sortedStates;
    NSMutableSet *_processedTransactionIDs;
    NSPersistentHistoryToken *_finalHistoryToken;
    long long _accumulatedChangeBytes;
}

- (void)dealloc;
- (id)initWithOptions:(id)a0;
- (char)reset:(id *)a0;
- (id)analyzerStateForChangedObjectID:(id)a0 error:(id *)a1;
- (id)fetchSortedStates:(id *)a0;
- (char)finishProcessing:(id *)a0;
- (id)newAnalyzerStateForChange:(id)a0 error:(id *)a1;
- (char)processChange:(id)a0 error:(id *)a1;
- (char)processTransaction:(id)a0 error:(id *)a1;
- (char)resetStateForObjectID:(id)a0 error:(id *)a1;

@end
