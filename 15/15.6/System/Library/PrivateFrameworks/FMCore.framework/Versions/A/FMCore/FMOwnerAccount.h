@class NSString, ACAccount;

@interface FMOwnerAccount : NSObject <FMOwnerAccountIdentity>

@property (retain, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *hostName;
@property (copy, nonatomic) NSString *personId;
@property (nonatomic) char legacyBehavior;
@property (readonly, copy, nonatomic) NSString *authToken;

+ (id)sharedInstance;
+ (id)authTokenForSubAccount:(id)a0 type:(long long)a1 error:(id *)a2;
+ (id)hostNameForAccount:(id)a0 type:(long long)a1;
+ (id)ownerAccount;
+ (id)ownerAccountWithType:(long long)a0;
+ (id)personIdForAccount:(id)a0 error:(id *)a1;
+ (id)primaryAccountWithStore:(id)a0 error:(id *)a1;
+ (void)renewCredentialsWithBundleId:(id)a0 force:(char)a1 reason:(id)a2 completion:(id /* block */)a3;
+ (id)subAccountForAccount:(id)a0 type:(long long)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)accountChanged;
- (id)hostNameOfType:(long long)a0;
- (id)initWithAuthToken:(id)a0 personId:(id)a1;
- (void)initializeAccount;
- (id)tokenOfType:(long long)a0;

@end
