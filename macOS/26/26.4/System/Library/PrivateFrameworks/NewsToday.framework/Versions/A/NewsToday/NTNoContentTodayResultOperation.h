@class NTTodayResults, NSDictionary, NTPBTodayResultOperationFetchInfo;

@interface NTNoContentTodayResultOperation : NTTodayResultOperation

@property (copy, nonatomic) NTTodayResults *resultTodayResults;
@property (copy, nonatomic) NSDictionary *resultAssetHandlesByAssetID;
@property (copy, nonatomic) NTPBTodayResultOperationFetchInfo *resultFetchInfo;

- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void)performOperation;
- (void).cxx_destruct;

@end
