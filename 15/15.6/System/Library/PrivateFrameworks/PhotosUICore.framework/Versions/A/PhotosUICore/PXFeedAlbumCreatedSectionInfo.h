@interface PXFeedAlbumCreatedSectionInfo : PXFeedSectionInfo

- (long long)sectionType;
- (char)isMine;
- (long long)typeForItemAtIndex:(long long)a0;
- (void)updateFromCloudFeedEntry;

@end
