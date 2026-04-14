@class NSLock, NSMutableDictionary;

@interface IMBusinessNameManager : NSObject

@property (retain) NSLock *cacheLock;
@property (retain) NSMutableDictionary *cache;
@property (retain) NSMutableDictionary *pendingRequests;
@property (retain) NSMutableDictionary *pendingUniqueRequests;

+ (id)sharedInstance;
+ (id)placeholderBusinessNameForBrandURI:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)_fetchBusinessNameForUID:(id)a0;
- (void)_fetchedBrandName:(id)a0 forUID:(id)a1;
- (id)businessNameForUID:(id)a0 blockFetch:(BOOL)a1 updateHandler:(id /* block */)a2 uniqueHandler:(id /* block */)a3;
- (id)businessNameForUID:(id)a0 updateHandler:(id /* block */)a1;

@end
