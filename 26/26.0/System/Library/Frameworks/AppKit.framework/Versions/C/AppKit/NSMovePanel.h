@class NSTextField, NSString, NSURL, NSWindow, FILocationPopUp, NSButton;

@interface NSMovePanel : NSPanel {
    NSURL *_initialURL;
    FILocationPopUp *_movePopUp;
    NSTextField *_movePopUpLabel;
    NSButton *_cancelButton;
    NSButton *_moveButton;
    NSWindow *_parentWindow;
    id /* block */ _completionHandler;
}

@property (retain) NSMovePanel *retainedSelf;
@property (copy) NSURL *initialURL;
@property (copy) NSURL *directoryURL;
@property (copy) NSString *prompt;
@property (copy) NSString *title;
@property (copy) NSString *fileName;
@property (copy) NSString *movePopupFieldLabel;
@property (readonly) NSURL *finalURL;

+ (id)movePanel;
+ (void)newDocument:(id)a0;

- (void)cancel:(id)a0;
- (void)setPrompt:(id)a0;
- (id)prompt;
- (id)init;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)ok:(id)a0;
- (void)_okForMoveMode:(id /* block */)a0;
- (unsigned long long)finderLocationPopUpMenuOptions:(id)a0;
- (void)_completeMoveForReturnCode:(long long)a0;
- (void)_configureMovePopUp;
- (void)_didEndSheet:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)_didPresentErrorWithRecovery:(BOOL)a0 contextInfo:(void *)a1;
- (BOOL)_sendToDelegateValidateFilenameOrURL:(id)a0 error:(id *)a1;
- (void)_updateOkButtonEnabledState;
- (void)beginWithCompletionHandler:(id /* block */)a0;
- (void)dismissWindow:(long long)a0;
- (void)finderLocationPopUp:(id)a0 didChangeToDirectoryURL:(id)a1;
- (void)finderLocationPopUpOtherLocation:(id)a0;
- (id)finderLocationPopUpRequestRecentPlaces:(id)a0;
- (id)movePopupFieldLabel;
- (void)newDocument:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)setMovePopupFieldLabel:(id)a0;

@end
