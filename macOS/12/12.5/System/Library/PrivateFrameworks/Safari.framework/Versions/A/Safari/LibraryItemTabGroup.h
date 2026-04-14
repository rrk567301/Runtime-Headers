@class NSArray, NSString, WBTabGroup;

@interface LibraryItemTabGroup : LibraryItem <NSPasteboardWriting>

@property (readonly, nonatomic) WBTabGroup *tabGroup;
@property (readonly, copy, nonatomic) NSArray *validTabsForPasteboard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (BOOL)isMovable;
- (id)writableTypesForPasteboard:(id)a0;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)_webArchiveData;
- (id)initWithTabGroup:(id)a0 windowUUID:(id)a1;
- (id)initWithIcon:(id)a0 title:(id)a1 badgeCount:(long long)a2;
- (BOOL)canShowTrailingButton;
- (BOOL)canShowContextMenu;

@end
