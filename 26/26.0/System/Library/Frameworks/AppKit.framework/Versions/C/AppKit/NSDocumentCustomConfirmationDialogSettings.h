@interface NSDocumentCustomConfirmationDialogSettings : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ explanation;
    void /* unknown type, empty encoding */ buttons;
}

- (void)setExplanation:(id)a0;
- (id)init;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)addButtonWithTitle:(id)a0 action:(id /* block */)a1;

@end
