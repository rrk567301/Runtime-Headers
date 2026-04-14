@class AOSUIOBBaseViewController, NSString, AOSUIAccountContactBaseViewModel, AALocalContactInfo, AOSUIAccountContactsSharingController, AAMessagesInviteContext, NSWindow;

@interface AOSUIInviteMessagesFlowController : NSViewController <AOSUIOBBaseViewControllerDelegate>

@property (retain) AAMessagesInviteContext *context;
@property (retain) AALocalContactInfo *contact;
@property (retain) AOSUIAccountContactBaseViewModel *defaultMessageViewModel;
@property (retain) AOSUIAccountContactBaseViewModel *messageSentViewModel;
@property (retain) NSWindow *modalWindow;
@property (retain) AOSUIAccountContactsSharingController *sharingController;
@property BOOL attemptedToSendMessage;
@property (retain) AOSUIOBBaseViewController *baseViewController;
@property (retain) NSWindow *hostWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_setupWindowWithContentViewController:(id)a0;
- (void)_sendDefaultiMessage;
- (void)firstButtonPressed;
- (void)secondButtonPressed;
- (id)initWithContext:(id)a0 invitedContact:(id)a1 baseViewController:(id)a2 defaultMessageViewModel:(id)a3 messageSentViewModel:(id)a4;
- (void)beginInviteFlow;
- (void)_showTrustedContactSetupCompleted;
- (void)_showEditMessageUI;

@end
