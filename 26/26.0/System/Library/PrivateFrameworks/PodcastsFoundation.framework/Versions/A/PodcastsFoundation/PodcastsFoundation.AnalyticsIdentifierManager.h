@class NSString, _TtC18PodcastsFoundation26AnalyticsIdentifierManager;

@interface PodcastsFoundation.AnalyticsIdentifierManager : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_store;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ promiseLock;
}

@property (class, nonatomic, readonly) NSString *kMTResetIdentifierKey;
@property (class, nonatomic, readonly) _TtC18PodcastsFoundation26AnalyticsIdentifierManager *sharedInstance;

@property (nonatomic, retain) id identifierPromise;

- (id)init;
- (void)resetIfNeeded;
- (void).cxx_destruct;
- (void)resetIdentifiers;
- (void)updateIdentifiers;

@end
