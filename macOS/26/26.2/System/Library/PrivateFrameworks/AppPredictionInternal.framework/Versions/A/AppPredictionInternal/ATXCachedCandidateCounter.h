@class BPSPublisher, NSMutableDictionary;

@interface ATXCachedCandidateCounter : NSObject {
    BPSPublisher *_publisher;
    NSMutableDictionary *_cache;
}

- (void).cxx_destruct;
- (id)init;
- (void)populateCache;
- (long long)countForCandidate:(id)a0;
- (id)initWithCandidateIdPublisher:(id)a0;

@end
