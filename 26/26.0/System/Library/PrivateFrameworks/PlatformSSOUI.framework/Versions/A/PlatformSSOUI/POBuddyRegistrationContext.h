@class NSArray, NSString, NSData, PORegistrationContext, LAContext;

@interface POBuddyRegistrationContext : NSObject

@property (retain, nonatomic) PORegistrationContext *registrationContext;
@property (retain, nonatomic) NSData *ssoTokens;
@property (retain, nonatomic) NSArray *groups;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *loginUserName;
@property (copy, nonatomic) NSData *profilePicture;
@property (retain, nonatomic) NSString *accountDisplayName;
@property (retain, nonatomic) LAContext *userCredential;
@property (retain, nonatomic) LAContext *userPIN;
@property (retain, nonatomic) NSString *tokenId;
@property (retain, nonatomic) NSData *tokenHash;
@property (retain, nonatomic) NSData *tokenWrapHash;
@property (nonatomic) BOOL shouldCreatePlatformSSOUser;
@property (nonatomic) BOOL shouldAutoSubmitCreateUser;
@property (nonatomic) BOOL credentialTransferCompleted;

- (id)init;
- (void).cxx_destruct;
- (id)passwordForUser;

@end
