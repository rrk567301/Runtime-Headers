@class AMVariablesEditorPanel, NSArray, AMWorkflowView, AMVariablesEditorView, AMVariable;

@interface AMVariablesEditorWindowController : NSWindowController

@property (retain) AMVariablesEditorView *_variableEditorView;
@property (weak) AMVariablesEditorPanel *_editorPanel;
@property (retain, nonatomic) AMVariable *tempVariable;
@property (readonly, nonatomic) BOOL needsUserAttention;
@property (readonly, nonatomic) NSArray *workflowVariableNames;
@property (retain, nonatomic) AMVariable *variable;
@property (retain, nonatomic) AMVariablesEditorView *variablesEditorView;
@property (weak) AMWorkflowView *workflowView;
@property BOOL variableHasUnsavedChanges;

- (id)windowNibName;
- (void)cancel:(id)a0;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)ok:(id)a0;
- (void)awakeFromNib;
- (void)willClose;

@end
