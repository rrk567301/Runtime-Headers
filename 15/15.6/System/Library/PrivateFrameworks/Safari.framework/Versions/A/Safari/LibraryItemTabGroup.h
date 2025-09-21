@class WBTabGroup, NSArray, NSString, NSMutableDictionary;
@protocol LibraryItemTabGroupDelegate;

@interface LibraryItemTabGroup : LibraryItem <NSPasteboardWriting> {
    NSString *_windowUUID;
    NSMutableDictionary *_tabToLibraryItemDictionary;
    char _isShorteningTitle;
    char _itemsChangedWhileShortening;
}

@property (retain, nonatomic) WBTabGroup *tabGroup;
@property (readonly, copy, nonatomic) NSArray *validTabsForPasteboard;
@property (weak, nonatomic) id<LibraryItemTabGroupDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)typeForTabGroup:(id)a0;

- (void).cxx_destruct;
- (id)attributedTitle;
- (id)accessibilityLabel;
- (id)icon;
- (char)isMovable;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (id)_webArchiveData;
- (double)_approximateTabTitleWidth;
- (id)_currentTabTitleFont;
- (char)_shouldShowProfileTitle;
- (void)_updateItemTitlesWithTruncatedTitles:(id)a0;
- (char)canShowContextMenu;
- (char)canShowTrailingButton;
- (id)initWithTabGroup:(id)a0 windowUUID:(id)a1;
- (id)initWithType:(long long)a0 title:(id)a1 badgeCount:(long long)a2;
- (char)isExpandable;
- (id)libraryItemForTabUUID:(id)a0;
- (char)updateLibraryItemTabGroupTabs;
- (void)updateVerticalTabTitles;
- (void)updateVerticalTabsWithTabs:(id)a0 andDeletedTabs:(id)a1;

@end
