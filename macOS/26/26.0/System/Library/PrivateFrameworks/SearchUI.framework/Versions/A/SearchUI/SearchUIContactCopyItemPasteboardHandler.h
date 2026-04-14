@class NSArray, CNGroup, SFContactCopyItem;

@interface SearchUIContactCopyItemPasteboardHandler : SearchUIPasteboardCopyHandler

@property (retain) SFContactCopyItem *item;
@property (retain) NSArray *contacts;
@property (retain) CNGroup *group;

- (void)setItem:(id)a0;
- (id)displayName;
- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (id)dataForVCard;
- (BOOL)hasContacts;

@end
