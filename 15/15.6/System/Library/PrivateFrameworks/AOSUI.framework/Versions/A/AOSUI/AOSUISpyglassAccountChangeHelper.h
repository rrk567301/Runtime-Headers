@protocol AIDAServiceOwnerProtocol;

@interface AOSUISpyglassAccountChangeHelper : NSObject

@property (retain) id<AIDAServiceOwnerProtocol> serviceOwnersManager;

- (void).cxx_destruct;
- (id)initWithAccountManager:(id)a0;
- (id)_serviceTypeForAccount:(id)a0;
- (char)didAccountPropertiesChange:(id)a0 newAccount:(id)a1;
- (char)didActiveAccountChange:(id)a0 newAccount:(id)a1;

@end
