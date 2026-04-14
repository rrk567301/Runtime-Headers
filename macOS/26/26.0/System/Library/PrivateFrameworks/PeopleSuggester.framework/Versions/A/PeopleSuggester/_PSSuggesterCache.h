@class _PSPredictionContext, NSString, NSArray, NSObject, _PSSuggester;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;

@interface _PSSuggesterCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    _PSSuggester *_suggester;
    NSString *_cachedSessionID;
    _PSPredictionContext *_cachedContext;
    NSArray *_cachedPeopleSuggestions;
    unsigned long long _ticks;
    unsigned long long _fetches;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _refetchLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct atomic_flag { _Atomic BOOL _Value; } _hasQueuedRefetch;
    NSObject<OS_dispatch_group> *_queuedRefetchGroup;
}

+ (id)defaultService;
+ (id)defaultServiceWithMaxSuggestionCount:(id)a0;

- (void)performInitialFetchIfNeeded;
- (id)description;
- (void)_refetch;
- (void).cxx_destruct;
- (void)refetch;
- (void)backgroundRefetch;
- (id)getCachedContext;
- (id)getCachedSuggestions;
- (id)getCachedSuggestionsAndSessionID:(id *)a0;
- (id)initWithMaxSuggestionCount:(id)a0;

@end
