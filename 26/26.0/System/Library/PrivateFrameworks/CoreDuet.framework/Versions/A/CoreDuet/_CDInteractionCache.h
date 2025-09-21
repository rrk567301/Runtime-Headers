@class NSCountedSet, NSArray, _CDInteractionStore, NSPredicate, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _CDInteractionCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_mutableInteractions;
    unsigned long long _minCacheSize;
    NSCountedSet *_conversationCandidates;
    NSMutableDictionary *_mostRecentInteractionsByTaxonomyAndIdentifier;
    BOOL _needsRefetch;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) _CDInteractionStore *interactionStore;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) id /* block */ filterBlock;
@property (readonly, copy, nonatomic) NSArray *interactions;

- (id)_init;
- (id)uniqueConversationCandidates;
- (void)_updateMostRecentInteractionsWithInteraction:(id)a0 deleted:(BOOL)a1;
- (void)_deleteInteractions:(id)a0;
- (id)initWithInteractionStore:(id)a0 size:(unsigned long long)a1 queryPredicate:(id)a2 filterBlock:(id /* block */)a3;
- (void)debounceRefetch;
- (void)_invalidate;
- (id)initForTestingWithSize:(unsigned long long)a0;
- (id)mostRecentInteractionForCandidateIdentifier:(id)a0;
- (id)mostRecentInteractionForCandidateIdentifier:(id)a0 direction:(long long)a1 mechanism:(long long)a2;
- (id)init;
- (void)interactionsDeleted:(id)a0;
- (id)initForTesting;
- (void)_handleInteractionRemoval:(id)a0;
- (void)_forceRefetch;
- (id)mostRecentInteractionForCandidateIdentifier:(id)a0 direction:(long long)a1;
- (void)_refetch;
- (BOOL)containsUniqueCacheCandidate:(id)a0;
- (void)_rebuildMostRecentInteractions;
- (void)deleteInteractionsForTesting:(id)a0;
- (void)interactionsRecorded:(id)a0;
- (void).cxx_destruct;
- (void)_countConversationIDsForInteraction:(id)a0 deleted:(BOOL)a1;
- (void)cacheInteractionsForTesting:(id)a0;
- (void)_cacheInteractions:(id)a0;

@end
