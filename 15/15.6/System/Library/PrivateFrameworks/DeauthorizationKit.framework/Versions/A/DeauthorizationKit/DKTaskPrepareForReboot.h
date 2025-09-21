@class DKAdminAuthorizationWindowController, LAContext, NSString, NSNumber, NSWindow;

@interface DKTaskPrepareForReboot : DKTask

@property (retain, nonatomic) DKAdminAuthorizationWindowController *adminAuthorizationWindowController;
@property (retain) NSWindow *hostWindow;
@property (retain) LAContext *localAuthenticationContext;
@property (retain) NSString *password;
@property (retain) NSNumber *uid;
@property (retain) NSString *bootstrapTokenString;
@property (nonatomic) char mdmInitiated;
@property (nonatomic) char factoryInitiated;
@property (nonatomic) char deKOTAInitiated;
@property (nonatomic) char buddyInitiated;
@property char runningInSetupAssistantMode;

- (void).cxx_destruct;
- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (id)initWithExternalizedContext:(id)a0;
- (id)initWithHostWindow:(id)a0;
- (id)taskDescription;
- (char)runWithError:(id *)a0;
- (void)_prepareForRebootWithCompletion:(id /* block */)a0;
- (id)initForSetupAssistant;
- (id)initWithUserID:(id)a0 password:(id)a1;
- (id)initWithUserID:(id)a0 password:(id)a1 mdmInitiated:(char)a2;
- (id)initWithUserID:(id)a0 password:(id)a1 mdmInitiated:(char)a2 options:(id)a3;
- (void)prepareForReboot:(id /* block */)a0;

@end
