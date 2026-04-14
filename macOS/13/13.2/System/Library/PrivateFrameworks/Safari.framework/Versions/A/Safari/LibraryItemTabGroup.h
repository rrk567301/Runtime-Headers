@class WBTabGroup, NSArray, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, LibraryItemTabGroupDelegate;

@interface LibraryItemTabGroup : LibraryItem <NSPasteboardWriting> {
    NSString *_windowUUID;
    NSMutableDictionary *_tabToLibraryItemDictionary;
    NSObject<OS_dispatch_queue> *_updateVerticalTabTitlesQueue;
    BOOL _isShorteningTitle;
    BOOL _itemsChangedWhileShortening;
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
- (id)accessibilityLabel;
- (BOOL)isMovable;
- (id)icon;
- (id)writableTypesForPasteboard:(id)a0;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)_webArchiveData;
- (BOOL)isExpandable;
- (id)initWithType:(long long)a0 title:(id)a1 badgeCount:(long long)a2;
- (BOOL)canShowTrailingButton;
- (BOOL)canShowContextMenu;
- (id)initWithTabGroup:(id)a0 windowUUID:(id)a1;
- (id)libraryItemForTabUUID:(id)a0;
- (BOOL)updateLibraryItemTabGroupTabs;
- (void)updateVerticalTabTitles;
- (void)_updateItemTitlesWithTruncatedTitles:(id)a0;
- (double)_approximateTabTitleWidth;
- (id)_currentTabTitleFont;

@end
