@class WBSSavedAccount;

@interface AccountManagerAirDropSharingAuthenticationContext : NSObject

@property (readonly, nonatomic) WBSSavedAccount *savedAccount;
@property (readonly, nonatomic) BOOL hasBeenAuthenticated;

- (void).cxx_destruct;
- (int)_authorizationRight;
- (void)authenticateWithCompletionHandler:(id /* block */)a0;
- (id)initWithSavedAccount:(id)a0;

@end
