@class _PASLock, NSObject;
@protocol OS_dispatch_queue;

@interface PPPeopleSuggester : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_serialQueueForSweeping;
}

+ (id)sharedInstance;

- (void)_sweepCache;
- (id)rankedContactIdentifiers;
- (id)_rankedContactIdentifiersMatchingName:(id)a0;
- (void).cxx_destruct;
- (double)_cacheEntryAgeThresholdSecondsSince1970;
- (id)rankedContactIdentifiersMatchingName:(id)a0;
- (id)init;

@end
