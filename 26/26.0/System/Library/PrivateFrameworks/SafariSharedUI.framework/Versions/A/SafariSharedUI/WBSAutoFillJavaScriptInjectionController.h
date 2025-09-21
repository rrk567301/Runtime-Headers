@class NSString, WKContentWorld, NSMapTable, NSHashTable;

@interface WBSAutoFillJavaScriptInjectionController : NSObject <WKScriptMessageHandler> {
    WKContentWorld *_contentWorld;
    NSMapTable *_observers;
    NSHashTable *_configuredUserContentControllers;
    BOOL _isCurrentlyFilling;
}

@property (class, readonly, nonatomic) WBSAutoFillJavaScriptInjectionController *sharedController;
@property (class, readonly, nonatomic) BOOL isAutoFillDrivenByUIProcess;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)removeFocusObserver:(id)a0 forWebView:(id)a1;
- (void)addFocusObserver:(id)a0 forWebView:(id)a1;
- (void)annotateForm:(double)a0 withValues:(id)a1 inFrame:(id)a2 webView:(id)a3 completionHandler:(id /* block */)a4;
- (void)autoFillControlsInForm:(double)a0 withPassword:(id)a1 focusingControl:(id)a2 inFrame:(id)a3 webView:(id)a4 completionHandler:(id /* block */)a5;
- (void)autoFillFieldsWithOneTimeCode:(id)a0 shouldSubmit:(BOOL)a1 inFrame:(id)a2 webView:(id)a3 completionHandler:(id /* block */)a4;
- (void)autoFillFormWithValues:(id)a0 focusFieldAfterFilling:(BOOL)a1 fieldToFocus:(id)a2 fieldsToObscure:(id)a3 shouldSubmit:(BOOL)a4 recursivelyClearMetadataAfterFilling:(BOOL)a5 inFrame:(id)a6 webView:(id)a7 completionHandler:(id /* block */)a8;
- (void)clearAndResetAutoFillStatusOfControls:(id)a0 inFrame:(id)a1 webView:(id)a2 completionHandler:(id /* block */)a3;
- (void)disableSpellCheckInControl:(id)a0 inFrame:(id)a1 webView:(id)a2 completionHandler:(id /* block */)a3;
- (void)focusControlForStreamlinedLogin:(id)a0 inFrame:(id)a1 webView:(id)a2 completionHandler:(id /* block */)a3;
- (void)frameInfoForFrameWithHandle:(id)a0 inWebView:(id)a1 completionHandler:(id /* block */)a2;
- (void)getEditingStatusFromAllFramesInWebView:(id)a0 completionHandler:(id /* block */)a1;
- (void)metadataForAllFormsInAllFramesOfWebView:(id)a0 requestType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)metadataForControl:(id)a0 andContainingFormInFrame:(id)a1 webView:(id)a2 completionHandler:(id /* block */)a3;
- (void)replaceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inControl:(id)a1 withString:(id)a2 inFrame:(id)a3 webView:(id)a4 completionHandler:(id /* block */)a5;
- (void)resetMetadataCachesInAllFramesInWebView:(id)a0 completionHandler:(id /* block */)a1;
- (void)selectRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inControl:(id)a1 inFrame:(id)a2 webView:(id)a3 completionHandler:(id /* block */)a4;
- (void)setAutoFillAvailable:(BOOL)a0 forControl:(id)a1 inFrame:(id)a2 webView:(id)a3 completionHandler:(id /* block */)a4;
- (void)setControls:(id)a0 asAutoFilled:(BOOL)a1 inFrame:(id)a2 webView:(id)a3 completionHandler:(id /* block */)a4;
- (void)setStrongPasswordElements:(id)a0 viewableIfAppropriate:(BOOL)a1 inFrame:(id)a2 webView:(id)a3 completionHandler:(id /* block */)a4;
- (void)setUpScriptInjectionWithUserContentController:(id)a0;
- (void)showAutoFillButtonOfType:(long long)a0 inControlIfFocused:(id)a1 inFrame:(id)a2 webView:(id)a3 completionHandler:(id /* block */)a4;
- (void)_addAncestorFrameURLsToFormControlMetadata:(id)a0 frameContainingControl:(id)a1 mainFrame:(id)a2;
- (BOOL)_ancestorFramesOfFrame:(id)a0 startingFromFrame:(id)a1 ancestorFrames:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_applyBasicUITransformsToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inFrame:(id)a1 webView:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_controlRectFromFormControlMetadataDictionary:(id)a0;
- (void)_convertControlBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromFrame:(id)a1 toMainFrameInWebView:(id)a2 completionHandler:(id /* block */)a3;
- (void)_enumerateAllFramesInWebView:(id)a0 withBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)_formControlMetadataFromJavaScriptDictionary:(id)a0 frameContainingControl:(id)a1 mainFrame:(id)a2 webView:(id)a3 completionHandler:(id /* block */)a4;
- (id)_formMetadataFromJavaScriptDictionary:(id)a0;
- (void)_handleAutoFilledFieldWithMetadata:(id)a0;
- (void)_handleControlBlurredMessage:(id)a0;
- (void)_handleControlFocusedMessage:(id)a0;
- (void)_handleControlInputMessage:(id)a0;
- (void)_handleManualAutoFillRequestMessage:(id)a0;
- (void)_populateFormControlMetadataDictionary:(id)a0 withValuesFromControlRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_replaceAutoFillButtonTypeStringsWithEnumValues:(id)a0;
- (void)blurControls:(id)a0 inFrame:(id)a1 webView:(id)a2 completionHandler:(id /* block */)a3;
- (void)clearControls:(id)a0 inFrame:(id)a1 webView:(id)a2 completionHandler:(id /* block */)a3;
- (void)metadataForFormInFrame:(id)a0 webView:(id)a1 requestType:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)removeAllFocusObserversForWebView:(id)a0;
- (void)resetMetadataCacheInFrame:(id)a0 webView:(id)a1 completionHandler:(id /* block */)a2;

@end
