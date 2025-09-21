@class NSError;

@interface IAServerAccountSetupResult : IAAccountSetupResult

@property char isExistingAccount;
@property (retain) NSError *setupError;

- (void).cxx_destruct;

@end
