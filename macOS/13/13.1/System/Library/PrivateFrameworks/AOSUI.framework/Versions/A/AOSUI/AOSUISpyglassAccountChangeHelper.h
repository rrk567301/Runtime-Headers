@protocol AIDAServiceOwnerProtocol;

@interface AOSUISpyglassAccountChangeHelper : NSObject

@property (retain) id<AIDAServiceOwnerProtocol> serviceOwnersManager;

- (void).cxx_destruct;
- (id)initWithAccountManager:(id)a0;
- (BOOL)didActiveAccountChange:(id)a0 newAccount:(id)a1;
- (BOOL)didAccountPropertiesChange:(id)a0 newAccount:(id)a1;
- (id)_serviceTypeForAccount:(id)a0;

@end
