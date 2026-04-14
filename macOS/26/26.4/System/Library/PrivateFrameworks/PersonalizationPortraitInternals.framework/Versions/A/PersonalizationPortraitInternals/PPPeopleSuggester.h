@class _PASLock, NSObject;
@protocol OS_dispatch_queue;

@interface PPPeopleSuggester : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_serialQueueForSweeping;
}

+ (id)sharedInstance;

- (id)_rankedContactIdentifiersMatchingName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_sweepCache;
- (double)_cacheEntryAgeThresholdSecondsSince1970;
- (id)rankedContactIdentifiersMatchingName:(id)a0;
- (id)rankedContactIdentifiers;

@end
