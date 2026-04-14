@interface VideosUI.SearchBarController : NSObject <NSSearchFieldDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ searchField;
}

- (void)controlTextDidChange:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)controlTextDidBeginEditing:(id)a0;

@end
