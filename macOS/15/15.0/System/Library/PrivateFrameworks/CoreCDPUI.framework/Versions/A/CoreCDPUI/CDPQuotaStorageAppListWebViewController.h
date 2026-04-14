@interface CDPQuotaStorageAppListWebViewController : CDPICAWebKitViewController <CDPQuotaStorageAppListJSImports>

@property (copy, nonatomic) id /* block */ userWantsRPD;
@property (copy, nonatomic) id /* block */ dismiss;

- (void).cxx_destruct;
- (void)dismiss:(id)a0;
- (void)userWantsToResetProtectedData;

@end
