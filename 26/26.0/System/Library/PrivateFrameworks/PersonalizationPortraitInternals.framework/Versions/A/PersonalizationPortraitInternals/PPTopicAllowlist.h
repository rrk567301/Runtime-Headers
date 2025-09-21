@class _PASCFBurstTrie, PPTrialWrapper;
@protocol TRINotificationToken;

@interface PPTopicAllowlist : NSObject {
    _PASCFBurstTrie *_allowlistTrie;
    PPTrialWrapper *_trialWrapper;
    id<TRINotificationToken> _trialToken;
}

+ (id)sharedInstance;

- (id)initWithTrialWrapper:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)filterTopicDictionary:(id)a0 clientProcess:(id)a1;
- (id)indicesOfAllowedTopicsInRecordArray:(id)a0 clientProcess:(id)a1;
- (id)indicesOfAllowedTopicsInScoredTopicArray:(id)a0 clientProcess:(id)a1;
- (BOOL)shouldBypassAllowlist:(id)a0;

@end
