@class NSMutableDictionary, NSDate;

@interface IADNSCache : NSObject {
    NSMutableDictionary *_cacheDict;
}

@property (retain) NSDate *lastSyncDate;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)_sync;
- (id)resultForHost:(id)a0;
- (void)cacheResult:(id)a0 forHost:(id)a1;
- (void)_delayedSync;

@end
