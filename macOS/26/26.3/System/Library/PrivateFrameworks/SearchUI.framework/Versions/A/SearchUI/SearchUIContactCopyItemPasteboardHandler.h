@class NSArray, CNGroup, SFContactCopyItem;

@interface SearchUIContactCopyItemPasteboardHandler : SearchUIPasteboardCopyHandler

@property (retain) SFContactCopyItem *item;
@property (retain) NSArray *contacts;
@property (retain) CNGroup *group;

- (id)displayName;
- (void)setItem:(id)a0;
- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (id)dataForVCard;
- (BOOL)hasContacts;

@end
