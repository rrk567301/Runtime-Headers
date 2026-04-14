@class NSTextField, NSWindow, SFPasswordAsstController;

@interface SFPasswordAsstView : NSView {
    SFPasswordAsstController *_controller;
    NSTextField *_newPassword;
    NSTextField *_verifyPassword;
    NSTextField *_originalPassword;
    NSWindow *window;
    void *_privateData;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)awakeFromNib;
- (void)closing;
- (void)setNewPasswordField:(id)a0;
- (id)newPasswordField;
- (void)setVerifyPasswordField:(id)a0;
- (void)setOriginalPasswordField:(id)a0;
- (void)clickDiscloseTriangle:(id)a0;

@end
