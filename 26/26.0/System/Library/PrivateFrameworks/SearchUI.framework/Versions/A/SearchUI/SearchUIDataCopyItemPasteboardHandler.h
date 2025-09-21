@class SearchUICopyItem, NSURL;

@interface SearchUIDataCopyItemPasteboardHandler : SearchUIPasteboardCopyHandler

@property (retain) SearchUICopyItem *item;
@property (retain) NSURL *fileURL;

- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (id)uttype;

@end
