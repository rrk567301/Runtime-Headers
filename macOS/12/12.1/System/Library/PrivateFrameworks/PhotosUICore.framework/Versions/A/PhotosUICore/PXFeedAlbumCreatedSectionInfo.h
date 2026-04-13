@interface PXFeedAlbumCreatedSectionInfo : PXFeedSectionInfo

- (long long)sectionType;
- (BOOL)isMine;
- (void)updateFromCloudFeedEntry;
- (long long)typeForItemAtIndex:(long long)a0;

@end
