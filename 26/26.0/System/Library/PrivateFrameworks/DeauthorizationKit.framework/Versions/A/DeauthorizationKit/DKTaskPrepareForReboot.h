@class DKAdminAuthorizationWindowController, LAContext, NSString, NSNumber, NSWindow;

@interface DKTaskPrepareForReboot : DKTask

@property (retain, nonatomic) DKAdminAuthorizationWindowController *adminAuthorizationWindowController;
@property (retain) NSWindow *hostWindow;
@property (retain) LAContext *localAuthenticationContext;
@property (retain) NSString *password;
@property (retain) NSNumber *uid;
@property (retain) NSString *bootstrapTokenString;
@property (nonatomic) BOOL mdmInitiated;
@property (nonatomic) BOOL factoryInitiated;
@property (nonatomic) BOOL deKOTAInitiated;
@property (nonatomic) BOOL buddyInitiated;
@property (nonatomic) BOOL skipTransferBuddyPane;
@property BOOL runningInSetupAssistantMode;

- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (id)initWithExternalizedContext:(id)a0;
- (id)taskDescription;
- (void).cxx_destruct;
- (id)initWithHostWindow:(id)a0;
- (BOOL)runWithError:(id *)a0;
- (void)_prepareForRebootWithCompletion:(id /* block */)a0;
- (id)initForSetupAssistant;
- (id)initWithUserID:(id)a0 password:(id)a1;
- (id)initWithUserID:(id)a0 password:(id)a1 mdmInitiated:(BOOL)a2;
- (id)initWithUserID:(id)a0 password:(id)a1 mdmInitiated:(BOOL)a2 options:(id)a3;
- (void)prepareForReboot:(id /* block */)a0;

@end
