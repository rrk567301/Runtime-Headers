@class NSButton, BookmarksViewController;

@interface BookmarksRowView : NSTableRowView {
    BookmarksViewController *_bookmarksViewController;
    NSButton *_disclosureButton;
}

@property (retain, nonatomic) id item;

- (void)didAddSubview:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)_updateDisclosureButtonVisibility;
- (id)initWithBookmarksViewController:(id)a0;

@end
