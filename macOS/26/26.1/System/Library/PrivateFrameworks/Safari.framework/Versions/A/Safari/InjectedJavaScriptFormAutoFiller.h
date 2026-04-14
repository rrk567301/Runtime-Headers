@class BrowserViewController, NSString;

@interface InjectedJavaScriptFormAutoFiller : NSObject <FormAutoFiller>

@property (readonly, weak, nonatomic) BrowserViewController *browserViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)annotateForm:(double)a0 inFrame:(id)a1 withValues:(id)a2;
- (void)autoFillOneTimeCodeFieldsInFrame:(id)a0 withValue:(id)a1 shouldSubmit:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)disableSpellCheckInField:(id)a0 inFrame:(id)a1;
- (void)focusControlForStreamlinedLogin:(id)a0 inFrame:(id)a1;
- (void)selectRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inField:(id)a1 inFrame:(id)a2;
- (void)setAutoFillSpinnerVisibility:(BOOL)a0 textFieldMetadata:(id)a1 frame:(id)a2;
- (void)setFormControls:(id)a0 inFrame:(id)a1 asAutoFilled:(BOOL)a2;
- (void)setStrongPasswordElementViewableIfAppropriate:(BOOL)a0 frame:(id)a1 passwordControlUniqueIDs:(id)a2;
- (void)substitutePasswordElementsWithAutomaticPasswordElementsInFrame:(id)a0 formID:(double)a1 focusedPasswordControlUniqueID:(id)a2 passwordControlUniqueIDs:(id)a3 automaticPassword:(id)a4 blurAfterSubstitution:(BOOL)a5 completionHandler:(id /* block */)a6;
- (void)_getFrameInfoForFrameHandle:(id)a0 completionHandler:(id /* block */)a1;
- (void)autoFillFormInFrame:(id)a0 withValues:(id)a1 focusFieldAfterFilling:(BOOL)a2 fieldToFocus:(id)a3 fieldsToObscure:(id)a4 shouldSubmit:(BOOL)a5 recursivelyClearMetadataAfterFilling:(BOOL)a6 completionHandler:(id /* block */)a7;
- (void)clearAutoFilledCreditCardFieldsInFrame:(id)a0 controlUniqueIDs:(id)a1 completionHandler:(id /* block */)a2;
- (void)collectAllFormsMetadataWithRequestType:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)collectEditedFormTextStatus:(id /* block */)a0;
- (void)collectFormMetadataForManualAutoFillInFrame:(id)a0 atURL:(id)a1;
- (void)collectFormMetadataForPreFillingFormAtURL:(id)a0;
- (void)collectFormMetadataForSafeAutoFillConfirmationInFrame:(id)a0 atURL:(id)a1 contactProperty:(id)a2 contactIdentifier:(id)a3 contactLabel:(id)a4 completionHandler:(id /* block */)a5;
- (void)collectMetadataForActiveForm:(id /* block */)a0;
- (void)getMetadataForTextField:(id)a0 inFrame:(id)a1 withCompletion:(id /* block */)a2;
- (id)initWithBrowserViewController:(id)a0;
- (void)recursivelyClearFormMetadataForFrames:(id)a0;
- (void)removeAutomaticPasswordElementsInFrame:(id)a0 formID:(double)a1 focusedPasswordControlUniqueID:(id)a2 passwordControlUniqueIDs:(id)a3;
- (void)removeAutomaticPasswordVisualTreatmentInFrame:(id)a0 formID:(double)a1 passwordControlUniqueIDs:(id)a2;
- (void)replaceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inField:(id)a1 inFrame:(id)a2 withString:(id)a3 andSelectTailStartingAt:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (void)setAutoFillButtonEnabledInFieldWithUniqueID:(id)a0 withButtonType:(long long)a1 frame:(id)a2;
- (void)setHTMLInputElementAutoFillAvailable:(BOOL)a0 forControlWithUniqueID:(id)a1 frame:(id)a2;
- (void)setTextFieldRequestedToShowAutoFillButtonInformationForControlWithUniqueID:(id)a0 frame:(id)a1;
- (void)showAutoFillButtonInFieldIfStillFocused:(id)a0 autoFillButtonType:(long long)a1 inFrame:(id)a2;
- (void)textDidChangeDelayCompletedField:(id)a0 inFrame:(id)a1;

@end
