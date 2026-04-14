@class FI_TTagEditorController, FI_TUpdateLayerView, FI_TTextField, FI_TTaggingTokenField;

@interface FI_TTaggingPopoverContentViewController : FI_TViewController {
    FI_TTextField *_titleField;
    FI_TTagEditorController *_tagEditorController;
    struct TNSWeakPtr<FI_TTaggingTokenField> { FI_TTaggingTokenField *fWeakObject; } _weakTokenField;
    FI_TUpdateLayerView *_suggestionsTableViewWrapper;
}

@property (readonly, weak) FI_TTaggingTokenField *tokenField;

- (void)cancelOperation:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)nibName;
- (void)setNodes:(const void *)a0;
- (void)configureView;
- (void)setTokenField:(id)a0;

@end
