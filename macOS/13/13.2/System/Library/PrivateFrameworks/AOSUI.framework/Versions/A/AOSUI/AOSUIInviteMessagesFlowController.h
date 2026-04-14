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
- (void)firstButtonPressed;
- (void)secondButtonPressed;
- (void)_sendDefaultiMessage;
- (void)_showEditMessageUI;
- (void)_showTrustedContactSetupCompleted;
- (id)initWithContext:(id)a0 invitedContact:(id)a1 baseViewController:(id)a2 defaultMessageViewModel:(id)a3 messageSentViewModel:(id)a4;
- (void)beginInviteFlow;

@end
