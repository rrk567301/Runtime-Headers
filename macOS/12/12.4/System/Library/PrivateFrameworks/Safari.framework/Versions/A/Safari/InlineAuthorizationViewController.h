@class NSString, LAUIAuthenticationViewController, NSObject;
@protocol InlineAuthorizationViewControllerDelegate;

@interface InlineAuthorizationViewController : NSViewController <LAUIAuthenticationViewControllerDelegate, PreferencesViewController> {
    LAUIAuthenticationViewController *_laViewController;
    NSString *_title;
    NSString *_subtitle;
    NSString *_subtitleNoTouchID;
    NSString *_dfrMessage;
}

@property (weak, nonatomic) NSObject<InlineAuthorizationViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double minimumPaneHeight;

+ (id)viewControllerForPasswordsAuthorization;
+ (id)viewControllerForCreditCardsAuthorization;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)_windowDidBecomeKey:(id)a0;
- (id)localizedSubTitleForMechanisms:(unsigned long long)a0;
- (void)cancelAuthentication;
- (void)attemptAuthorization;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 subtitleNoTouchID:(id)a2 dfrMessage:(id)a3;
- (void)_processAuthenticationResult:(BOOL)a0 error:(id)a1;
- (void)focusDefaultViewWithHostWindow:(id)a0;

@end
