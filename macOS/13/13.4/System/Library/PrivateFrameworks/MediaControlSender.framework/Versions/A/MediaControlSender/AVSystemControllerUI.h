@class NSImageView, NSString, NSTextField, NSButton, NSSecureTextField, NSWindow;

@interface AVSystemControllerUI : NSObject <NSTextFieldDelegate> {
    NSImageView *_iconView;
    NSWindow *_passwordWindow;
    NSTextField *_passwordMajorText;
    NSTextField *_passwordErrorText;
    NSSecureTextField *_passwordText;
    NSButton *_passwordRememberCheckBox;
    NSButton *_passwordOKButton;
    struct __CFDictionary { } *_routeDesc;
    BOOL _waitingForResponse;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)controlTextDidChange:(id)a0;
- (void)_sheetDidEnd:(id)a0 returnCode:(int)a1 contextInfo:(void *)a2;
- (void)_passwordCancel:(id)a0;
- (void)_passwordOK:(id)a0;

@end
