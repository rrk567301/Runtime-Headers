@class WBTab, NSString;

@interface LibraryItemVerticalTab : LibraryItem <NSPasteboardWriting>

@property (readonly, nonatomic) WBTab *tab;
@property (readonly, nonatomic) NSString *windowUUID;
@property (nonatomic, getter=isPinned) char pinned;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)isMovable;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (char)canShowContextMenu;
- (char)canShowTrailingButton;
- (id)initWithTab:(id)a0 windowUUID:(id)a1 isPinned:(char)a2;

@end
