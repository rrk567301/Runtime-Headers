@class _PASLock, NSObject;
@protocol OS_dispatch_queue;

@interface PPPeopleSuggester : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_serialQueueForSweeping;
}

+ (id)sharedInstance;

- (void)_sweepCache;
- (id)_rankedContactIdentifiersMatchingName:(id)a0;
- (id)rankedContactIdentifiersMatchingName:(id)a0;
- (double)_cacheEntryAgeThresholdSecondsSince1970;
- (void).cxx_destruct;
- (id)rankedContactIdentifiers;
- (id)init;

@end
