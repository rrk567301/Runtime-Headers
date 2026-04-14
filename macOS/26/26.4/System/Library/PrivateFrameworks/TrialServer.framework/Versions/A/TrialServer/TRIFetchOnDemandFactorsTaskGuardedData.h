@class NSMutableSet, NSError, NSMutableArray, NSDate;

@interface TRIFetchOnDemandFactorsTaskGuardedData : NSObject {
    NSMutableArray *fetchOperations;
    int overallStatus;
    NSDate *earliestRetryDate;
    NSError *fetchError;
    NSMutableSet *downloadableFactorNames;
}

- (void).cxx_destruct;
- (id)description;

@end
