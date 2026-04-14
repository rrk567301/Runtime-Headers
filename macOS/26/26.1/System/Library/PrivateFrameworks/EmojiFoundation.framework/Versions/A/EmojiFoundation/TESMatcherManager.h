@class NSLock, NSMutableDictionary;

@interface TESMatcherManager : NSObject {
    NSLock *_matcherCacheLock;
}

@property (retain, nonatomic) NSMutableDictionary *matcherCache;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (id)_getOrCreateMatcherForLocale:(id)a0;
- (id)matcherForLocale:(id)a0;

@end
