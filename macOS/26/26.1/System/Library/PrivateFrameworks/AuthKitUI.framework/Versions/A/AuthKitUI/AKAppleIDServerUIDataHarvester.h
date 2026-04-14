@class NSDictionary, NSMutableDictionary;

@interface AKAppleIDServerUIDataHarvester : NSObject {
    NSMutableDictionary *_harvestedData;
}

@property (readonly, copy, nonatomic) NSDictionary *harvestedData;

- (void).cxx_destruct;
- (id)init;
- (void)_clearPendingDOBFromPrimaryAppleAccount;
- (void)_harvestIDMSRecoveryHeadersInfo:(id)a0;
- (void)harvestDataFromClientInfo:(id)a0 withExtractor:(id)a1;
- (void)harvestDataFromServerHTTPResponse:(id)a0;
- (void)harvestIDMSRecoveryInfoFromClientInfo:(id)a0;
- (void)harvestIDMSRecoveryInfoFromHeaders:(id)a0;

@end
