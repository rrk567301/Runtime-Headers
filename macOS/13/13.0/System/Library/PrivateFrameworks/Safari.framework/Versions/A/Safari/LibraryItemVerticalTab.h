@class WBTab, NSString;

@interface LibraryItemVerticalTab : LibraryItem <NSPasteboardWriting>

@property (readonly, nonatomic) WBTab *tab;
@property (readonly, nonatomic) NSString *windowUUID;
@property (readonly, nonatomic) BOOL isPinned;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isMovable;
- (id)writableTypesForPasteboard:(id)a0;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)initWithTab:(id)a0 windowUUID:(id)a1 isPinned:(BOOL)a2;
- (BOOL)canShowTrailingButton;
- (BOOL)canShowContextMenu;

@end
