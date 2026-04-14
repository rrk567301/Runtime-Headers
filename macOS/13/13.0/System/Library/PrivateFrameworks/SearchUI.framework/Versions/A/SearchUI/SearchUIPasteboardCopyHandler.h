@class NSString, SFCopyItem;

@interface SearchUIPasteboardCopyHandler : NSObject <NSPasteboardWriting>

@property (retain) SFCopyItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)writableTypesForPasteboard:(id)a0;
- (id)pasteboardPropertyListForType:(id)a0;

@end
