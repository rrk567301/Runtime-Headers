@interface BRCFinderBookmarkItem : BRCDocumentItem

- (char)isFinderBookmark;
- (id)asShareableItem;
- (char)isShareableItem;
- (id)asFinderBookmark;
- (id)documentRecordID;

@end
