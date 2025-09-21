@class NSTitlebarPopoverViewController, NSPopover;

@interface NSTitlebarRenamingSession : NSTitlebarRenamingSessionBase {
    NSPopover *_popover;
    NSTitlebarPopoverViewController *_titlebarPopoverViewController;
    int _validity;
}

- (void)cancelOperation:(id)a0;
- (id)initWithWindow:(id)a0;
- (void).cxx_destruct;
- (BOOL)beginWithEditingMode:(unsigned long long)a0 editingTitle:(id)a1 editingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)popoverDidClose:(id)a0;
- (void)popoverWillClose:(id)a0;

@end
