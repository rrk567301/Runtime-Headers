@interface BRCFinderBookmarkItem : BRCDocumentItem

- (BOOL)isFinderBookmark;
- (BOOL)isShareableItem;
- (id)asShareableItem;
- (id)asFinderBookmark;
- (id)documentRecordID;

@end
