@class NSObject, NSString, NSRemoteServiceConnection, NSError, NSRemotePanelOrderingContext, NSRemoteWindowController;
@protocol OS_dispatch_queue, NSAppearanceCustomization, OS_dispatch_semaphore;

@interface NSRemotePanel : NSObject <NSRemoteServiceConnectionDelegate> {
    NSObject<NSAppearanceCustomization> *_appearanceCustomizer;
    NSRemoteServiceConnection *_serviceConnection;
    unsigned long long _state;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSError *_currentErrorBeingHandled;
    struct __RPFlags { unsigned char isFloating : 1; unsigned char becomesKeyOnlyIfNeeded : 1; unsigned char worksWhenModal : 1; unsigned char isSheet : 1; unsigned char useAlertStyle : 1; unsigned char mainThreadKVOIsActive : 1; unsigned int reserved : 26; } _rpFlags;
}

@property (copy) id /* block */ completionHandler;
@property (retain) NSRemotePanelOrderingContext *orderingContext;
@property (getter=_useAlertStyle, setter=_setUseAlertStyle:) BOOL useAlertStyle;
@property (retain, setter=_setAlertMessage:) NSString *alertMessage;
@property (retain, setter=_setAlertInformativeMessage:) NSString *alertInformationMessage;
@property id delegate;
@property (retain) NSString *prompt;
@property (retain) NSString *title;
@property BOOL isSheet;
@property (readonly) NSRemoteWindowController *controller;
@property (readonly) BOOL isRunning;

+ (id)keyPathsForPanelSettings;
+ (id)getURLsForCompletionHandlerRequest:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cleanup;
- (long long)runModal;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isRunning;
- (id)contentView;
- (BOOL)worksWhenModal;
- (void)cancel:(id)a0;
- (void)ok:(id)a0;
- (void)orderOut:(id)a0;
- (void)sheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(id)a2;
- (void)setWorksWhenModal:(BOOL)a0;
- (BOOL)isFloatingPanel;
- (void)setFloatingPanel:(BOOL)a0;
- (void)setBecomesKeyOnlyIfNeeded:(BOOL)a0;
- (BOOL)becomesKeyOnlyIfNeeded;
- (void)_didPresentErrorWithRecovery:(BOOL)a0 contextInfo:(id)a1;
- (void)beginWithCompletionHandler:(id /* block */)a0;
- (void)connection:(id)a0 didReceiveError:(id)a1;
- (void)controller:(id)a0 hasWindowAvailable:(id)a1;
- (void)connection:(id)a0 didReceiveRequest:(id)a1;
- (BOOL)asyncSelectFirstResponderWithDirection:(unsigned long long)a0;
- (void)_accessibilityHandleEnhancedUserInterfaceValueChanged:(id)a0;
- (void)_handlePerformKeyEquivalent:(id)a0;
- (unsigned long long)_panelType;
- (void)_invalidatePBOXRemotePanelSession;
- (BOOL)mainThreadKVOActive;
- (void)setMainThreadKVOActive:(BOOL)a0;
- (id)getObservedkeyPathsForPanelSettings;
- (id)dictionaryForObservedValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_handleKVOStateDidChange:(id)a0;
- (void)_registerForKVOStateChange;
- (void)_unregisterForKVOStateChange;
- (void)_sendPanelCompletionRequest:(unsigned long long)a0;
- (int)_runOrderingOperationWithContext:(id)a0;
- (id)serializeSettings;
- (id)_accessibilityRequestTokensWithParent:(id)a0;
- (void)_accessibilityApplyReplyTokens:(id)a0 windowElement:(id)a1;
- (void)_accessibilityRemotePanelCompleted;
- (void)_setDefaultSettings;
- (BOOL)_initRemotePanelSession;
- (BOOL)_createAuxiliaryConnection;
- (void)panelCompletedWithRequest:(id)a0;
- (void)panelCompletedWithNewDocumentRequest;
- (void)_handlePanelComplete:(id)a0;
- (void)_handleShouldEnableURLDelegate:(id)a0;
- (void)_attemptRecoveryFromErrorForRequest:(id)a0;
- (void)_handleSetPresentationOptions:(id)a0;

@end
