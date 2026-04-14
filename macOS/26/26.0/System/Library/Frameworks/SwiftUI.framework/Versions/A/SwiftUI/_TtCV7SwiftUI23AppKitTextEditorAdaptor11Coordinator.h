@interface _TtCV7SwiftUI23AppKitTextEditorAdaptor11Coordinator : SwiftUI.AppKitTextEditorCoordinatorBase <NSTextViewDelegate> {
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ selection;
    void /* unknown type, empty encoding */ selectionStorage;
    void /* unknown type, empty encoding */ undoManager;
}

- (void)textDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)textView:(id)a0 menu:(id)a1 forEvent:(id)a2 atIndex:(long long)a3;
- (void)textViewDidChangeSelection:(id)a0;
- (id)undoManagerForTextView:(id)a0;

@end
