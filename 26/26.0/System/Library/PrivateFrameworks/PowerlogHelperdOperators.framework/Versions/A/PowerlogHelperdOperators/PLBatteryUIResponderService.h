@class PLXPCResponderOperatorComposition, NSString, NSMutableDictionary, NSDictionary, NSOperationQueue, NSMutableArray;

@interface PLBatteryUIResponderService : PLService <PLBatteryUIResponseProtocol>

@property (retain) NSString *requestingService;
@property (retain) NSString *plistCopyDestination;
@property BOOL skipPlistWrite;
@property (retain) NSMutableDictionary *resultDictionary;
@property (retain) PLXPCResponderOperatorComposition *queryResponder;
@property (retain) NSDictionary *configuration;
@property (retain) NSMutableDictionary *requestedObjects;
@property (retain) NSMutableArray *executionChain;
@property (retain) NSOperationQueue *operationQueue;
@property (retain) NSMutableArray *orderOfExecution;
@property BOOL shouldUseMidnightQueryRange;
@property (retain) PLBatteryUIResponderService *responderService;
@property (retain) NSMutableArray *dependencies;
@property (retain) NSMutableDictionary *responseCache;
@property (retain) NSMutableDictionary *sharedUtilityCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

- (void)initOperatorDependancies;
- (void)cleanup;
- (void)configure:(id)a0;
- (id)result;
- (void)run;
- (void).cxx_destruct;
- (void)coalesce;
- (BOOL)demoMode;
- (id)constructResponseObjectFromType:(long long)a0;
- (id)convertResponseToLegacyFormat:(id)a0;
- (id)createCoalescedBreakdownWithResponse:(id)a0;
- (id)demoPath;
- (id)dynamicRangeKeyForLength:(int)a0 bucketSize:(int)a1;
- (double)endOfDayWithNow:(id)a0;
- (double)endOfHourWithNow:(id)a0;
- (id)getBreakdownForLength:(int)a0 fromCachedLength:(int)a1 forBucketSize:(int)a2;
- (id)getDynamicEndUISOCDrainByBuckets:(int)a0 fromCachedLength:(int)a1 forBucketSize:(int)a2;
- (id)getUISOCDrainByBuckets:(int)a0 fromCachedLength:(int)a1 forBucketSize:(int)a2;
- (id)getUISOCDrainByBuckets:(int)a0 fromCachedLength:(int)a1 forBucketSize:(int)a2 isDynamicSource:(BOOL)a3;
- (BOOL)isOfTypeBreakdownForResponseType:(long long)a0;
- (void)linkDependencies;
- (id)possibleRequests;
- (void)prepareBreakdown:(id)a0 withDrainSummaries:(id)a1 withFullDayBreakdown:(id)a2 withDynamicBreakdown:(id)a3;
- (id)rangeKeyForLength:(int)a0 bucketSize:(int)a1;

@end
