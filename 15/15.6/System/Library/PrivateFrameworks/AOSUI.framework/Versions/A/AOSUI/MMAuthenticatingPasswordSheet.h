@class NSString, NSDictionary, NSImage, NSError, NSURL, NSWindow;

@interface MMAuthenticatingPasswordSheet : NSObject {
    NSString *_defaultButtonString;
    NSString *_cancelButtonString;
    NSString *_alternateButtonString;
}

@property (copy) NSString *accountID;
@property (copy) NSString *title;
@property (copy) NSString *message;
@property (copy) NSDictionary *authenticationResults;
@property (retain) NSError *authenticationError;
@property NSWindow *parentWindow;
@property (copy) id /* block */ helpHandler;
@property (copy) NSImage *displayImage;
@property (copy) NSString *password;
@property (copy) NSString *rawPassword;
@property (copy) NSURL *iForgotURL;
@property char shouldPromptForPasswordOnly;
@property char shouldSkipiCloudLogin;
@property char isEphemeral;
@property char supportsPiggybacking;
@property char shouldForceInteractiveAuth;
@property char shouldOfferSecurityUpgrade;

+ (id)standardiForgotURL;

- (void).cxx_destruct;
- (void)helpButtonPressed:(id)a0;
- (void)iForgotButtonPressed:(id)a0;
- (id)initWithAccountID:(id)a0 title:(id)a1 message:(id)a2 defaultButtonTitle:(id)a3 cancelButtonTitle:(id)a4 alternateButtonTitle:(id)a5 icon:(id)a6 iconLabel:(id)a7;
- (void)showAuthPasswordSheetUsingWindow:(id)a0;
- (void)showAuthPasswordSheetUsingWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)showAuthPasswordSheetUsingWindow:(id)a0 shouldNest:(char)a1 helpHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
