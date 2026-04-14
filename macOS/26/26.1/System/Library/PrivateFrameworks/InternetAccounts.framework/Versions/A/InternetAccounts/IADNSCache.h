@class NSMutableDictionary, NSDate;

@interface IADNSCache : NSObject {
    NSMutableDictionary *_cacheDict;
}

@property (retain) NSDate *lastSyncDate;

+ (id)shared;

- (void)_sync;
- (void).cxx_destruct;
- (id)init;
- (void)_delayedSync;
- (void)cacheResult:(id)a0 forHost:(id)a1;
- (id)resultForHost:(id)a0;

@end
