@class NSTextField, NSString, NSView, NSURL, NSWindow, FILocationPopUp, NSButton;

@interface NSMovePanel : NSPanel {
    NSURL *_initialURL;
    NSView *_movePanelContentView;
    FILocationPopUp *_movePopUp;
    NSTextField *_movePopUpLabel;
    double _movePopUpLabelLastIntrinsicWidth;
    NSButton *_cancelButton;
    NSButton *_moveButton;
    NSWindow *_parentWindow;
    id /* block */ _completionHandler;
    unsigned char _retained : 1;
}

@property (readonly) NSURL *finalURL;
@property (copy) NSURL *initialURL;
@property (copy) NSURL *URL;
@property (copy) NSString *prompt;
@property (copy) NSString *fileName;

+ (void)newDocument:(id)a0;
+ (id)movePanel;
+ (struct CGSize { double x0; double x1; })_minContentRectSize;
+ (id)newRemoteMovePanel;

- (void)dealloc;
- (void)setTitle:(id)a0;
- (void)setDirectoryURL:(id)a0;
- (void)setPrompt:(id)a0;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (id)title;
- (id)directoryURL;
- (BOOL)performKeyEquivalent:(id)a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)setContentView:(id)a0;
- (void)newDocument:(id)a0;
- (void)cancel:(id)a0;
- (void)ok:(id)a0;
- (void)setMovePopupFieldLabel:(id)a0;
- (id)prompt;
- (void)beginWithCompletionHandler:(id /* block */)a0;
- (BOOL)_useAlertStyle;
- (void)_initContentView;
- (BOOL)_isModalWindowOrSheetRunning;
- (void)_didEndSheet:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)_removeExtraRetainIfNeeded;
- (void)_didPresentErrorWithRecovery:(BOOL)a0 contextInfo:(void *)a1;
- (void)dismissWindow:(long long)a0;
- (void)_setUseAlertStyle:(BOOL)a0;
- (void)_setAlertMessage:(id)a0;
- (void)_setAlertInformativeMessage:(id)a0;
- (id)_ubiquityContainerURLs;
- (struct { unsigned int x0[8]; })_hostAppAuditToken;
- (void)_updateOkButtonEnabledState;
- (void)_layoutAndResizeMovePanelIfNecessary;
- (void)_closeAndCallCompletionHandlerWithReturnCode:(long long)a0;
- (void)_completeMoveForReturnCode:(long long)a0;
- (BOOL)_sendToDelegateValidateFilenameOrURL:(id)a0 error:(id *)a1;
- (void)_okForMoveMode:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })_computeMinSizeForSimpleMovePanel;
- (struct CGSize { double x0; double x1; })_adjustMinContentSizeForMinFrameSize;
- (void)_configureMovePopUp;
- (void)finderLocationPopUp:(id)a0 didChangeToDirectoryURL:(id)a1;
- (id)finderLocationPopUpRequestRecentPlaces:(id)a0;
- (unsigned long long)finderLocationPopUpMenuOptions:(id)a0;
- (void)finderLocationPopUpOtherLocation:(id)a0;
- (id)movePopupFieldLabel;

@end
