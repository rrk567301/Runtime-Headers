@class NSTextField, NSView, NSButton, NSWindow;

@interface iCloudHandleFLUI : NSObject

@property (retain) NSWindow *followUpUISheet;
@property (weak) NSButton *verifyButton;
@property (weak) NSButton *cancelButton;
@property (weak) NSView *followUpUIViewContainer;
@property (weak) NSTextField *titleText;
@property (copy, nonatomic) id /* block */ completionHandler;
@property NSWindow *parentWindow;
@property NSView *followupView;

- (id)init;
- (void)dismiss;
- (BOOL)isShowingSheet;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)dismissFollowUpUI;
- (void)showfollowupUIForView:(id)a0 usingWindow:(id)a1 completionHandler:(id /* block */)a2;

@end
