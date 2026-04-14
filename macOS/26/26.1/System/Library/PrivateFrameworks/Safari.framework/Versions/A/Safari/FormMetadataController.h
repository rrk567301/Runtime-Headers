@interface FormMetadataController : WBSFormMetadataController {
    struct BundleScriptWorld { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _scriptWorld;
}

+ (id)sharedFormMetadataController;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)autoFilledField:(id)a0 inForm:(id)a1 inFrame:(id)a2;
- (void)clearScriptWorld;
- (id)formAutoFillNodeForJSWrapper:(struct OpaqueJSValue { } *)a0 inContext:(struct OpaqueJSContext { } *)a1;
- (void)textFieldFocused:(id)a0 inFrame:(id)a1 textFieldMetadata:(id)a2 formMetadata:(id)a3;
- (id)_formMetadataObserverForBundlePage:(const void *)a0;
- (BOOL)isAutoFillAllowedInFrame:(const void *)a0;
- (void *)scriptWorld;
- (void)textDidChangeDelayCompletedField:(id)a0 inFrame:(id)a1;
- (void)textFieldBlurred:(id)a0 inFrame:(id)a1 page:(id)a2 textFieldMetadata:(id)a3 formMetadata:(id)a4;

@end
