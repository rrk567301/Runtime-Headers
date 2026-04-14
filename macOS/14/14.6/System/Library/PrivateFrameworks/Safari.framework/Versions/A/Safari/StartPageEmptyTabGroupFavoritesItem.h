@class NSButton, NSString, NSTextField;
@protocol StartPageEmptyTabGroupFavoritesItemDelegate;

@interface StartPageEmptyTabGroupFavoritesItem : NSCollectionViewItem

@property (weak, nonatomic) NSTextField *emptyFolderTextField;
@property (weak, nonatomic) NSButton *openBookmarksButton;
@property (copy, nonatomic) NSString *emptyFolderText;
@property (copy, nonatomic) NSString *buttonText;
@property (weak, nonatomic) id<StartPageEmptyTabGroupFavoritesItemDelegate> delegate;

- (void).cxx_destruct;
- (void)openBookmarksInSidebarWasPressed:(id)a0;

@end
