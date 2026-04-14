@interface FormMetadataController : WBSFormMetadataController {
    struct BundleScriptWorld { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _scriptWorld;
}

+ (id)sharedFormMetadataController;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)clearScriptWorld;
- (void)finishedAutoFillingForm:(id)a0 inFrame:(id)a1 shouldSubmit:(BOOL)a2;
- (void)finishedAutoFillingOneTimeCodeInFrame:(id)a0 shouldSubmit:(BOOL)a1;
- (void)unidentifiedTextFieldFocused:(id)a0 inFrame:(id)a1 textFieldMetadata:(id)a2 formMetadata:(id)a3;
- (void)unidentifiedTextFieldBlurred:(id)a0 inFrame:(id)a1 textFieldMetadata:(id)a2 formMetadata:(id)a3;
- (void)otherCreditCardFieldFocused:(id)a0 inFrame:(id)a1 textFieldMetadata:(id)a2 formMetadata:(id)a3;
- (void)otherCreditCardFieldBlurred:(id)a0 inFrame:(id)a1 textFieldMetadata:(id)a2 formMetadata:(id)a3;
- (void)passwordFieldFocused:(id)a0 inFrame:(id)a1 isPasswordFieldForUserCredentials:(BOOL)a2;
- (void)passwordFieldBlurred:(id)a0 inFrame:(id)a1 page:(id)a2 textFieldMetadata:(id)a3 formMetadata:(id)a4;
- (void)creditCardFieldFocused:(id)a0 inFrame:(id)a1;
- (void)creditCardFieldBlurred:(id)a0 inFrame:(id)a1 page:(id)a2 textFieldMetadata:(id)a3 formMetadata:(id)a4;
- (void)usernameFieldFocused:(id)a0 fieldMetadata:(id)a1 inForm:(id)a2 inFrame:(id)a3;
- (void)usernameFieldBlurred:(id)a0 inFrame:(id)a1 page:(id)a2 textFieldMetadata:(id)a3 formMetadata:(id)a4;
- (void)oneTimeCodeFieldFocused:(id)a0 withFieldMetadata:(id)a1 inFrame:(id)a2;
- (void)oneTimeCodeFieldBlurred:(id)a0 inFrame:(id)a1 page:(id)a2 textFieldMetadata:(id)a3 formMetadata:(id)a4;
- (BOOL)addressBookAutoFillableFieldFocused:(id)a0 withAddressBookAutoFillableFieldMetadata:(id)a1 inFrame:(id)a2;
- (void)addressBookAutoFillableFieldBlurred:(id)a0 inFrame:(id)a1 page:(id)a2 textFieldMetadata:(id)a3 formMetadata:(id)a4;
- (id)formAutoFillNodeForJSWrapper:(struct OpaqueJSValue { } *)a0 inContext:(struct OpaqueJSContext { } *)a1;
- (BOOL)shouldIncludeNonEmptyFields;
- (void)textDidChangeDelayCompletedField:(id)a0 inFrame:(id)a1;
- (void *)scriptWorld;
- (BOOL)isAutoFillAllowedInFrame:(const void *)a0;
- (BOOL)_isAddressBookAutoFillAllowedInFormWithType:(unsigned long long)a0;
- (void)_requestToShowAutoFillButtonForAddressBookFieldWithMetadataIfAvailable:(id)a0 formMetadata:(id)a1 inFrame:(id)a2 textFieldNodeHandle:(const void *)a3;
- (BOOL)_fieldContainsStrongPasswordButton:(id)a0;
- (void)_otherCreditCardFieldOrUnidentifiedFieldFocused:(id)a0 inFrame:(id)a1 textFieldMetadata:(id)a2 formMetadata:(id)a3;
- (void)_otherCreditCardFieldOrUnidentifiedFieldBlurred:(id)a0 inFrame:(id)a1 textFieldMetadata:(id)a2 formMetadata:(id)a3;
- (void)_requestToShowCreditCardButtonInFieldIfNecessary:(id)a0 inFrame:(id)a1 textFieldMetadata:(id)a2 formMetadata:(id)a3;
- (void)_hideAutoFillButtonInField:(id)a0;
- (id)_formMetadataObserverForBundlePage:(const void *)a0;

@end
