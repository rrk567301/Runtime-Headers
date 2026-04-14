@class NSStackView, NSString, NSView, NSTextField, NSButton, CNAvatarViewController;

@interface TabGroupActivityNoticeView : NSView <CNAvatarViewDelegate> {
    NSButton *_actionButton;
    CNAvatarViewController *_avatarViewController;
    NSView *_avatar;
    NSStackView *_containerStackView;
    NSTextField *_messageTextField;
    NSStackView *_textStackView;
    NSTextField *_titleTextField;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)avatarViewControllerDidRefresh:(id)a0;
- (void)avatarViewController:(id)a0 contactAvatarDidChange:(id)a1;
- (id)_createTextField;
- (void)_updateAvatar:(id)a0;
- (id)initWithTitleText:(id)a0 messageText:(id)a1 contact:(id)a2;

@end
