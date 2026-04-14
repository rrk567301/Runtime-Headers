@class NSTextField, BookmarksUndoController, NSString, WebBookmarkLeaf, NSLayoutConstraint, NSButton, NSPopover;

@interface BookmarkAddressEditingPopoverViewController : NSViewController <NSPopoverDelegate, NSControlTextEditingDelegate> {
    NSPopover *_popover;
    WebBookmarkLeaf *_bookmark;
    BOOL _shouldDiscardChangesWhenDoneEditing;
}

@property (weak, nonatomic) NSTextField *addressField;
@property (weak, nonatomic) NSLayoutConstraint *addressFieldLeadingConstraint;
@property (weak, nonatomic) NSButton *doneButton;
@property (copy, nonatomic) id /* block */ popoverDidCloseHandler;
@property (retain, nonatomic) BookmarksUndoController *undoController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)viewDidLoad;
- (void)cancelOperation:(id)a0;
- (id)initWithBookmark:(id)a0;
- (void).cxx_destruct;
- (id)nibName;
- (void)popoverDidClose:(id)a0;
- (void)showRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 preferredEdge:(unsigned long long)a2;
- (void)doneEditing:(id)a0;
- (id)initWithBookmark:(id)a0 nibBundle:(id)a1;
- (void)showRelativeToBoundsOfView:(id)a0 preferredEdge:(unsigned long long)a1;

@end
