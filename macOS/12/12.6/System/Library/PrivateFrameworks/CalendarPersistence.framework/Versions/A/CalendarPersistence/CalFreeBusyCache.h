@class NSMutableDictionary, NSTimer, NSMutableSet, NSMutableArray, NSManagedObjectID;

@interface CalFreeBusyCache : NSObject {
    NSMutableDictionary *_cache;
    NSMutableDictionary *_eventsCache;
    NSMutableArray *_runningLookups;
    NSTimer *_cacheExpiryTimer;
    NSMutableDictionary *_expiresNextTimer;
    NSMutableDictionary *_expiresNextTimerPlusOne;
    NSMutableSet *_addressesToRefresh;
}

@property (readonly) NSManagedObjectID *principalID;

+ (int)leastAvailabileFreeBusyTypeForArray:(id)a0;
+ (id)numberForFreeBusyType:(int)a0;

- (void).cxx_destruct;
- (void)cleanUp;
- (id)initWithPrincipalID:(id)a0;
- (void)clearCacheExceptForSharedUIDs:(id)a0;
- (void)freeBusyOperationWithInfo:(id)a0 spans:(id)a1 details:(id)a2 otherInfos:(id)a3 error:(id)a4;
- (void)freeBusyServerRequestForCUAddresses:(id)a0 forEventSharedUid:(id)a1 inTimeRange:(id)a2 withDelegate:(id)a3;
- (void)_insertSpanFrom:(id)a0 to:(id)a1 withValue:(id)a2 intoTree:(id)a3;
- (void)_removeSpanFrom:(id)a0 to:(id)a1 fromTree:(id)a2;
- (void)_cacheExpiryTimerFired;
- (void)_markForExpirationFrom:(id)a0 to:(id)a1 forCUAddress:(id)a2 event:(id)a3;
- (id)bucketKeyDatesForStartDate:(id)a0 endDate:(id)a1;
- (id)bucketKeyDateForDate:(id)a0;
- (BOOL)isPrincipalConnected;
- (id)_freeBusyForCUAddresses:(id)a0 forEventSharedUid:(id)a1 inTimeRange:(id)a2 requestFromServer:(BOOL)a3 withDelegate:(id)a4;
- (void)cacheFreeBusy:(id)a0 forCUAddress:(id)a1 event:(id)a2 timeRange:(id)a3;
- (void)cacheEventDetailsArray:(id)a0 forCUAddress:(id)a1;
- (id)knownFreeBusyAndEventDetailsForCUAddresses:(id)a0 forEventSharedUid:(id)a1 inTimeRange:(id)a2;
- (id)freeBusyAndEventDetailsForCUAddresses:(id)a0 forEventSharedUid:(id)a1 inTimeRange:(id)a2 withDelegate:(id)a3;
- (id)knownFreeBusyForCUAddress:(id)a0 forEventSharedUid:(id)a1 inTimeRange:(id)a2;
- (void)cancelCallbacksTo:(id)a0;

@end
