@interface BRCFinderBookmarkItem : BRCDocumentItem

- (BOOL)isShareableItem;
- (id)asShareableItem;
- (BOOL)isFinderBookmark;
- (id)asFinderBookmark;
- (id)documentRecordID;

@end
