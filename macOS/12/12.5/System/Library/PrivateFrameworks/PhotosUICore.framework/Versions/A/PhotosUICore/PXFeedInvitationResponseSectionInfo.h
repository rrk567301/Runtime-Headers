@interface PXFeedInvitationResponseSectionInfo : PXFeedSectionInfo

- (id)assets;
- (long long)sectionType;
- (void)updateFromCloudFeedEntry;
- (long long)typeForItemAtIndex:(long long)a0;

@end
