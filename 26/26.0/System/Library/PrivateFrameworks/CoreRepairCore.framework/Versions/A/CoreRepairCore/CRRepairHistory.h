@class NSDictionary, NSSet;

@interface CRRepairHistory : NSObject {
    NSDictionary *repairHistoryMap;
    NSSet *useCountExceptionKeys;
    NSDictionary *componentMap;
}

- (id)init;
- (BOOL)isSupportedIPad;
- (void).cxx_destruct;
- (BOOL)CAABasedRepairForComponent:(int)a0 withHistory:(id)a1;
- (id)CAABasedRepairDateForComponent:(int)a0 withHistory:(id)a1;
- (id)RCHLBasedRepairDateForComponent:(int)a0 withHistory:(id)a1;
- (id)_getCachedCAAData;
- (id)_getClaimCountEnforceDate;
- (BOOL)checkUsedStatusFor:(int)a0 withHistory:(id)a1 withClaimCount:(id)a2;
- (BOOL)deviceSupportsRepairBootIntent;
- (id)extractRCHLRepairHistory;
- (id)extractRCHLRepairHistoryAndClaimCount:(id *)a0;
- (id)extractRepairCentersWithRCHLHistory:(id)a0;
- (id)extractRepairHistoryAsDictionary;
- (id)extractRepairsAfterACRZWithHistory:(id)a0;
- (id)findRCHLHistoryObjectForComponent:(int)a0 withHistory:(id)a1;
- (void)getCAAForRepairHistoryWithCompletion:(id /* block */)a0;
- (id)getCachedCAA;
- (id)getRCHLComponentWithType:(int)a0;
- (id)getRepairHistoryItemswithCAAHistory:(id)a0;
- (id)getRepairHistoryMap;
- (id)getUseCountExceptionsWith:(id)a0;
- (BOOL)hasHadRCHLBasedRepairForComponent:(int)a0 withHistory:(id)a1;
- (BOOL)hasInvalidRCHL;
- (BOOL)isRCHLRepairHistoryDevice;
- (BOOL)isSelfServiceSalesDistrict:(id)a0;
- (id)rawRCHLBasedRepairDateForComponent:(int)a0 withHistory:(id)a1;
- (id)repairCenterForComponent:(int)a0 withRCHLHistory:(id)a1;
- (id)repairDateForComponent:(int)a0 withRCHLHistory:(id)a1 withCAAHistory:(id)a2;

@end
