@interface BRCFinderBookmarkItem : BRCDocumentItem

- (BOOL)isFinderBookmark;
- (id)asFinderBookmark;
- (BOOL)isShareableItem;
- (id)asShareableItem;
- (id)contentsRecordID;
- (id)baseContentsRecord;

@end
