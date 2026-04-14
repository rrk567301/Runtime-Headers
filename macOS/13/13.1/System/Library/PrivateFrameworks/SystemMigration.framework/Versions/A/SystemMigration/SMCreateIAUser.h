@class NSString, LAContext, SMWelcomeController, NSNumber;

@interface SMCreateIAUser : NSObject

@property (retain) SMWelcomeController *parentController;
@property BOOL iaUserCreated;
@property BOOL iaPlistExists;
@property (retain) NSString *shortName;
@property (retain) NSString *fullName;
@property (retain) LAContext *laCtx;
@property (retain) NSNumber *uid;
@property (retain) NSString *password;

- (void).cxx_destruct;
- (id)initWithParentController:(id)a0;
- (BOOL)shouldRequestIAUserCredentials;
- (void)createIAUserWithCallbackBlock:(id /* block */)a0;
- (id)getUserNameToDisplay;
- (void)storeIAUserCredentialsToMaUserCredentials;
- (void)extractUID;

@end
