@interface VideosUI.SidebarSearchFieldDelegate : NSObject <VUIHintsWindowControllerDelegate, NSSearchFieldDelegate, VUISearchFieldDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ searchField;
    void /* unknown type, empty encoding */ searchDetailsViewController;
    void /* unknown type, empty encoding */ hintWindowViewController;
}

- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (id)init;
- (void).cxx_destruct;
- (void)controlTextDidBeginEditing:(id)a0;
- (void)hintsWindowControllerDidDismiss;
- (void)searchFieldDidBecomeFocus:(id)a0;

@end
