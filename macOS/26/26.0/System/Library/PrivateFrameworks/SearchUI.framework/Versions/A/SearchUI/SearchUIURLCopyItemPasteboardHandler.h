@class SFURLCopyItem;

@interface SearchUIURLCopyItemPasteboardHandler : SearchUIPasteboardCopyHandler

@property (retain) SFURLCopyItem *item;

- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;

@end
