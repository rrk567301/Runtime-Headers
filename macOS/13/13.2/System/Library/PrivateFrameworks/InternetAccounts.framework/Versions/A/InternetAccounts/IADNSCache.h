@class NSMutableDictionary, NSDate;

@interface IADNSCache : NSObject {
    NSMutableDictionary *_cacheDict;
}

@property (retain) NSDate *lastSyncDate;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)_sync;
- (void)_delayedSync;
- (id)resultForHost:(id)a0;
- (void)cacheResult:(id)a0 forHost:(id)a1;

@end
