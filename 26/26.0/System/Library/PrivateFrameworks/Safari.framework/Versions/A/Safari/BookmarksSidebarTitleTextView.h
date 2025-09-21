@class BookmarksSidebarTitleTextField;

@interface BookmarksSidebarTitleTextView : NSTextView

@property (weak, nonatomic) BookmarksSidebarTitleTextField *bookmarksSidebarTitleTextField;

- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)init;
- (void).cxx_destruct;

@end
