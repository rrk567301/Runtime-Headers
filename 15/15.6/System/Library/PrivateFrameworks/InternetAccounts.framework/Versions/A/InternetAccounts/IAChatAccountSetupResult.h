@class NSError, IMAccount;

@interface IAChatAccountSetupResult : IAAccountSetupResult

@property (retain) IMAccount *accountObject;
@property (retain) NSError *setupError;
@property char isExistingAccount;

- (void).cxx_destruct;

@end
