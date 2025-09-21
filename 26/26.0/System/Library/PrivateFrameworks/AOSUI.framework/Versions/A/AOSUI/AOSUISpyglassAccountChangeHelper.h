@protocol AIDAServiceOwnerProtocol;

@interface AOSUISpyglassAccountChangeHelper : NSObject

@property (retain) id<AIDAServiceOwnerProtocol> serviceOwnersManager;

- (id)initWithAccountManager:(id)a0;
- (void).cxx_destruct;
- (id)_serviceTypeForAccount:(id)a0;
- (BOOL)didAccountPropertiesChange:(id)a0 newAccount:(id)a1;
- (BOOL)didActiveAccountChange:(id)a0 newAccount:(id)a1;

@end
